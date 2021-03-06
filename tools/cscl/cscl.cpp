/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2008 CRI Middleware, Inc. All rights reserved.
 *
 * Use, modification and distribution are subject to the CRI Script Software
 * License, Version 1.0(see accompanying file "CriScript_License_1_0.txt" or
 * copy at www.criscript.com/trac/wiki/CRI%20Script%20Software%20License%201.0 ).
 *
 * Library  : CriScript compiler cscl.exe
 * Module   : Compiler main
 * File     : cscl.cpp
 * Date     : 
 * Version  : 
 *
 ****************************************************************************/
#include "stdafx.h"
#include "CRIScript.h"

//----------------------------------------------------------------------------
// Platform dependent defitnitions
//----------------------------------------------------------------------------
#ifdef __APPLE__
typedef wchar_t _TCHAR;
#else
#endif

//----------------------------------------------------------------------------
// Constants
//----------------------------------------------------------------------------
const int32_t RETVALUE_SUCCESS			=  0;
const int32_t RETVALUE_COMPILE_WARNING	=  0;
const int32_t RETVALUE_COMPILE_ERROR	=  1;
const int32_t RETVALUE_TOOL_ERROR		= -2;

//----------------------------------------------------------------------------
// Definitions
//----------------------------------------------------------------------------
typedef int (OPTIONCALLBACK)(int argc, _TCHAR* argv[]);
struct OPTION_SWITCH_ENTRY{
	wchar_t* strOption;
	wchar_t* strDescription;
	OPTIONCALLBACK* pcallback;
};

class ArgumentHandler {
public:
	ArgumentHandler( uint32_t iNum, OPTION_SWITCH_ENTRY* pArgumentDefs );
	~ArgumentHandler();

	int32_t parse(int argc, _TCHAR* argv[]);

	void setErrorHandler( cri::CErrorPool* pError ) { m_pError = pError; }

private:
	map< wstring, OPTIONCALLBACK*> m_mapOptions;
	bool m_bInitialized;
	cri::CErrorPool* m_pError;
};

//----------------------------------------------------------------------------
// Decls
//----------------------------------------------------------------------------
int32_t CheckArgs(int argc, _TCHAR* argv[]);
int32_t Compile( CParser* pParser, ifstream& fin);
int32_t CompileAndLink( CParser* pParser, ifstream& fin );
int32_t Run();

int32_t CallbackSuppressBanner(int argc, _TCHAR* argv[]);
int32_t CallbacksuppressErrorLine(int argc, _TCHAR* argv[]);
int32_t CallbackExecute(int argc, _TCHAR* argv[]);

OPTION_SWITCH_ENTRY options[]= {
	{ L"-suppress:banner", L"Suppress banner display", CallbackSuppressBanner },
	{ L"-suppress:errorline", L"Suppress error line display", CallbacksuppressErrorLine },
	{ L"-execute", L"execute a script", CallbackExecute },
};

//----------------------------------------------------------------------------
// Global variables
//----------------------------------------------------------------------------
bool g_bPerformCompile = true;
bool g_bPerformLinkage = false;
bool g_bPerformExecution = false;
bool g_bSuppressBanner = false;
bool g_bsuppressErrorLine = false;
//temporary file location
//entry point
//optimize level
//target platform
//warning level
//Suppress warn/error

//----------------------------------------------------------------------------
// Functions
//----------------------------------------------------------------------------
#ifdef __APPLE__
_TCHAR** convertArguments( int argc, char * const argvOriginal[] )
{
	//convert arguments to utf16 array
	_TCHAR** argv = new( _TCHAR*[ argc ] );
	for( int32_t i = 0; i < argc; ++i )
	{
		int32_t iLength = strlen( argvOriginal[ i ] ) + 1;
		argv[ i ] = new( _TCHAR[ iLength ] );
		
		_TCHAR* pDest = argv[ i ];
		
		for( int32_t j = 0; j < iLength; ++j )
			*pDest++ = (_TCHAR)argvOriginal[ i ][ j ];
		*pDest++ = 0;
	}
	return argv;
}

void deleteArguments( int argc, _TCHAR** argv )
{
	//delete 
	for( int32_t i = 0; i < argc; ++i )
	{
		delete[]( argv[ i ] );
	}
	delete[]( argv );
}

int main (int argc, char * const argvOriginal[])
#else
int _tmain(int argc, _TCHAR* argv[])
#endif
{
	int32_t iRet = RETVALUE_SUCCESS;
	
#ifdef __APPLE__
	_TCHAR** argv = convertArguments( argc, argvOriginal );
#endif
	

	//Initialize argument handler
	ArgumentHandler argumenthandler( ARRAYSIZE( options ), options );

	//Initialize a parser interface
	cri::CParser* parser = new cri::CParser;

	//Initialize error handler
	cri::CErrorPool *error = new cri::CErrorPool;
	error->setErrorTable( cri::g_ErrorTable_English, sizeof( cri::g_ErrorTable_English ) 
													 / sizeof( cri::g_ErrorTable_English[ 0 ] ) );
	//parse args
	argumenthandler.setErrorHandler( error );
	int32_t iArgOffset = argumenthandler.parse( argc, argv );

	//Set error output configuration
	error->suppressErrorLine( g_bsuppressErrorLine );

	if( !g_bSuppressBanner )
	{
		CRISCRIPT_VERSIONS ver = parser->getVersions();
		cout << "CriScript compiler and linker ver.";
		cout << ver.major << ".";
		cout << ver.minor << ".";
		cout << ver.revision << ".";
		cout << ver.build << "\n";
		cout << "CRI Middleware inc. 2008" << endl;
	}
	
	if( argc <= iArgOffset )
	{
		if( error->hasError() )
			error->dumpError();
		delete( error );

		//Output help info
		cout << endl;
		cout << "cscl.exe [options] source" << endl;
		cout << "Option switch:" << endl;
		for( int32_t i = 0; i < ARRAYSIZE( options ); ++ i )
		{
			wcout << options[ i ].strOption << " : " << options[ i ].strDescription << endl; 
		}

		delete( parser );

#ifdef __APPLE__
		deleteArguments( argc, argv );	
#endif
        return RETVALUE_SUCCESS;
	}


	//Open the target file
#ifdef __APPLE__
	ifstream fin ( argvOriginal[ iArgOffset ], ios::in | ios::binary );
#else
	ifstream fin ( argv[ iArgOffset ], ios::in | ios::binary );
#endif
    if( !fin )
	{
		wstring strArg1( argv[ iArgOffset ] );
		wstring strNull( L"" );
		error->report( ERROR_FILENOTFOUND, 0, 0, strArg1,
												strNull,
												strArg1 );
		error->dumpError();
		delete( error );
		delete( parser );

#ifdef __APPLE__
		deleteArguments( argc, argv );	
#endif
        return RETVALUE_TOOL_ERROR;
    }

	//Check file endianness;
	//Note that wchar_t is 4 byte in OSX.
	uint16_t c;
	fin.read( (char*)&c, sizeof( uint16_t ) );

	bool bSourceEndiannness = false;
	switch( c )
	{
	case 0xfeff:
		//Little endian
		break;
	case 0xfffe:
		//Big endian
		bSourceEndiannness = true;
		break;
	default:
		{
		wstring strArg1( argv[ iArgOffset ] );
		wstring strNull( L"" );
		error->report( ERROR_INVALIDFILEENCODING, 0, 0, strArg1,
												strNull,
												strArg1 );
		error->dumpError();
		delete( error );
        
		}
			delete( parser );
#ifdef __APPLE__
			deleteArguments( argc, argv );	
#endif
			return RETVALUE_TOOL_ERROR;
	}

	//Initialize the lexer
	cri::CFileStreamLexer *lex = new cri::CFileStreamLexer;
	
	//test	
	lex->init();
	
	lex->setEndianness( bSourceEndiannness );

	//Initialize the codegen
	cri::CCilCodeGen *codegen = new cri::CCilCodeGen;

	//Initialize the parser engine
	parser->init( lex, codegen, error );
	
	//Set filestream to the lexer
	lex->setStream( &fin, &wstring( argv[ iArgOffset ] ) );

#ifdef DEBUG_PARSING
	//debug
	cri::yydebug = 1;
#endif
	if( !g_bPerformLinkage )
	{
		iRet = Compile( parser, fin );
		g_bPerformExecution = false;
	}
	else
	{
		iRet = CompileAndLink( parser, fin );
	}

	if( error->hasError() )
	{
		error->dumpError();
		cout << "Compile failed." << endl;
		iRet = RETVALUE_COMPILE_ERROR;
	}
	else
	{
		if( error->hasInformation() )
		{
			iRet = RETVALUE_COMPILE_WARNING;
			cout << "Compile succeeded but with some warnings" << endl;
		}
		else
		{
			iRet = RETVALUE_SUCCESS;
			cout << "Compile succeeded." << endl;
		}
		
		error->dumpError();
	}

	if( g_bPerformExecution && iRet != RETVALUE_COMPILE_ERROR )
	{
		cri::CCilVm *vm = new cri::CCilVm;
		cri::CCilDebugger *debugger = new cri::CCilDebugger;

		vm->setILPool( &*parser->getILPool().begin(), parser->getILPool().size() );
		//Note:
		//setSymbolInformation need to be invoked before SetMetaData() for now
		vm->setSymbolInformation( parser->getSymbolInformation() );
		vm->setMetaData( parser->getMetaData() );

		cout << "-----------------------------------------------------------------\n";
		cri::CCilDisasm * disasm = new cri::CCilDisasm;
		disasm->setILStream( &*parser->getILPool().begin(), parser->getILPool().size() );
		disasm->setSymbolInformation( parser->getSymbolInformation() );
		disasm->setMetaData( parser->getMetaData() );
		disasm->dumpDisasm();
		cout << "-----------------------------------------------------------------\n";

		iRet = vm->execute();
		iRet = vm->getExitCode(); 

		debugger->attach( vm );
		debugger->setSymbolInformation( parser->getSymbolInformation() );
		debugger->setMetaData( parser->getMetaData() );
		
		debugger->debugDumpStats();
		debugger->debugDumpStaticFields( 0 );	//dump all fields
		debugger->debugDumpObjects( 0 );		//dump all objects

		delete( disasm );
		delete( debugger );
		delete( vm );
	}

	delete( lex );
	delete( error );
	delete( codegen );
	delete( parser );
	
#ifdef __APPLE__
	deleteArguments( argc, argv );	
#endif
		
	return iRet;
}

int32_t Compile( CParser* pParser, ifstream& fin)
{
	//Disable linkage
	pParser->SetLinkage( false );
	int32_t i = pParser->process();
	fin.close();
	return i;
}

int32_t CompileAndLink( CParser* pParser, ifstream& fin )
{
	int32_t i = pParser->process();
	fin.close();
	return i;
}

//----------------------------------------------------------------------------
// ArgumentHandler::ctor
//----------------------------------------------------------------------------
ArgumentHandler::ArgumentHandler(  uint32_t iNum, OPTION_SWITCH_ENTRY* pArgumentDefs )
{
	assert( pArgumentDefs != NULL );
	assert( iNum );

	m_bInitialized = 0;
	
	for( uint32_t i = 0; i < iNum; ++ i )
	{
		m_mapOptions[ pArgumentDefs[ i ].strOption ] = pArgumentDefs[ i ].pcallback;
	}

	m_bInitialized = 1;
	m_pError = NULL;
}

//----------------------------------------------------------------------------
// ArgumentHandler::dtor
//----------------------------------------------------------------------------
ArgumentHandler::~ArgumentHandler()
{
	m_mapOptions.clear();
}

//----------------------------------------------------------------------------
// ArgumentHandler::parse implementation
//----------------------------------------------------------------------------
int32_t ArgumentHandler::parse(int argc, _TCHAR* argv[] )
{
	assert( argv );

	if( !m_bInitialized )
		return 0;

	int32_t iArgsparsed = 1;	//0: executable name
	wstring* pstrArg;
	wstring strNull( L"" );
	while( iArgsparsed < argc )
	{
		pstrArg = new wstring( (const wchar_t*)argv[ iArgsparsed ], wcslen( (const wchar_t*)argv[ iArgsparsed ] ) );
		std::transform( pstrArg->begin(), pstrArg->end(), pstrArg->begin(), (int(*)(int))std::tolower );


		if( *pstrArg->begin() == '-' )
			//|| *pstrArg->begin() == '/' )	//Now only '-' is allowed as option switc
		{
			//parse options
			//*pstrArg->begin() = '-';	//Replace '/'
			map< wstring, OPTIONCALLBACK*>::iterator it;
			it =  m_mapOptions.find( *pstrArg );
			if( it != m_mapOptions.end() && it->second != NULL )
			{
				iArgsparsed += it->second( argc - iArgsparsed, argv + iArgsparsed );
			}
			else
			{
				if( m_pError )
				{
					m_pError->report( ERROR_INVALIDOPTIONSWITCH, 0, 0, strNull,
											strNull,
											*pstrArg );

				}
				iArgsparsed ++;
			}
		}
		else
		{
			delete pstrArg;
			break;
		}

		delete pstrArg;
	}
	return iArgsparsed;
}

//----------------------------------------------------------------------------
// Callbacks
//----------------------------------------------------------------------------
int32_t CallbackSuppressBanner(int argc, _TCHAR* argv[])
{
	g_bSuppressBanner = true;
	return 1;
}

int32_t CallbacksuppressErrorLine(int argc, _TCHAR* argv[])
{
	g_bsuppressErrorLine = true;
	return 1;
}

int32_t CallbackExecute(int argc, _TCHAR* argv[])
{
	g_bPerformLinkage = true;
	g_bPerformExecution = true;
	return 1;
}
