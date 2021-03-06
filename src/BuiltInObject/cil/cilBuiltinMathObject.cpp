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
 *
 * Library  : CRIScript
 * Module   : cilBuiltinMathObject
 * File     : Defines built in math object
 * Date     : 
 * Version  : 
 *
 ****************************************************************************/

/***************************************************************************
 *      Include file
 ***************************************************************************/
#include "stdafx.h"
#include "criScript.h"
#include "cilCodeGen.h"
namespace cri {

/***************************************************************************
 *      Variables
 ***************************************************************************/
METHOD_INITIALIZATION_PARAM CMathObject::initParams[] = {
	{
		NAME_BUILTIN_MATH_OBJECT_CTOR,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::ctor,
		RID_BUILTINPARAM_DEFAULT_ZERO
	},
	{
		NAME_BUILTIN_MATH_OBJECT_CEIL,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::ceil,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_FLOOR,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::floor,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_RANDOM,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::random,
		RID_BUILTINPARAM_DEFAULT_ZERO
	},
	{
		NAME_BUILTIN_MATH_OBJECT_ROUND,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::round,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_COS,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::cos,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_SIN,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::sin,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_TAN,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::tan,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_ACOS,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::acos,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_ASIN,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::asin,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_ATAN,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::atan,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_ABS,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::abs,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_POW,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::pow,
		RID_BUILTINPARAM_DEFAULT_TWO
	},

	//not yet
	{
		NAME_BUILTIN_MATH_OBJECT_MAX,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::pow,
		RID_BUILTINPARAM_DEFAULT_TWO
	},
	{
		NAME_BUILTIN_MATH_OBJECT_MIN,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::pow,
		RID_BUILTINPARAM_DEFAULT_TWO
	},
	{
		NAME_BUILTIN_MATH_OBJECT_SQRT,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::pow,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_ATAN2,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::atan2,
		RID_BUILTINPARAM_DEFAULT_TWO
	},
	{
		NAME_BUILTIN_MATH_OBJECT_EXP,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::pow,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
	{
		NAME_BUILTIN_MATH_OBJECT_LOG,
		METHOD_NATIVE,
		(PMETHOD)&CMathObject::pow,
		RID_BUILTINPARAM_DEFAULT_ONE
	},
};

PROPERTY_INITIALIZATION_PARAM CMathObject::initPropertyParams[] = {
	{
		NAME_BUILTIN_MATH_PROPERTY_E,
		OPERAND_TYPE( OPERAND_FLOAT ),
		OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ),
		float( 2.7182818284590452354 )
	},
	{
		NAME_BUILTIN_MATH_PROPERTY_LN10,
		OPERAND_TYPE( OPERAND_FLOAT ),
		OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ),
		float( 2.302585092994046 )
	},
	{
		NAME_BUILTIN_MATH_PROPERTY_LN2,
		OPERAND_TYPE( OPERAND_FLOAT ),
		OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ),
		float( 0.6931471805599453 )
	},
	{
		NAME_BUILTIN_MATH_PROPERTY_LOG2E,
		OPERAND_TYPE( OPERAND_FLOAT ),
		OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ),
		float( 1.4426950408889634 )
	},
	{
		NAME_BUILTIN_MATH_PROPERTY_LOG10E,
		OPERAND_TYPE( OPERAND_FLOAT ),
		OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ),
		float( 0.4342944819032518 )
	},
	{
		NAME_BUILTIN_MATH_PROPERTY_PI,
		OPERAND_TYPE( OPERAND_FLOAT ),
		OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ),
		float( 3.14159265358932 )
	},
	{
		NAME_BUILTIN_MATH_PROPERTY_SQRT1_2,
		OPERAND_TYPE( OPERAND_FLOAT ),
		OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ),
		float( 0.7071067811865476 )
	},
	{
		NAME_BUILTIN_MATH_PROPERTY_SQRT2,
		OPERAND_TYPE( OPERAND_FLOAT ),
		OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ),
		float( 1.4142135623730951 )
	},
};

/***************************************************************************
 *      Methods
 ***************************************************************************/

/***************************************************************************
 *      Initialize
 ***************************************************************************/
bool CMathObject::InitializeCodeGen( ICodeGen& CodeGen )
{
	bool bReturn = true;

	RID ridObject = CodeGen.registerBuiltinObject( NAME_BUILTIN_MATH_OBJECT );
	if( ridObject == RID_NOTDEFINED )
		return bReturn;

	//Initialize Global object ref
	RID rid = CodeGen.getMetaData().generateStaticFieldRID( OPERAND_OBJECTREF,
															OPERAND_FLAG( OPERAND_FLAG_DONTDELETE
															| OPERAND_FLAG_DONTENUM
															| OPERAND_FLAG_READONLY ) );
	CodeGen.generateSymbolInformation( rid, NAME_BUILTIN_MATH_OBJECT, CG_SYMBOL_FLAG_READONLY, ridObject );

	//---------------------------------------------------------------------------
	// Initialize Math.call/ctor property
	//---------------------------------------------------------------------------
	for( int32_t i = 0; i<sizeof( initParams ) / sizeof( initParams[ 0 ] ); ++i )
	{
		//-----------------------------------------------------------------------
		//Register methods
		//-----------------------------------------------------------------------
		RID ridMethod = CodeGen.registerBuiltinMethod(
									wstring( initParams[ i ].pStrSymbol ),
									initParams[ i ].methodType,
									initParams[ i ].ridParam
									);
		if( ridMethod == RID_NOTDEFINED )
			return bReturn;
	}

	return bReturn;
}

/***************************************************************************
 *      Create a prototype object
 ***************************************************************************/
bool CMathObject::InitializeVm( CCilVm& vm )
{
	RID rid = vm.createPrototypeObject( vm.getMathObjectRID(),
										vm.getMetaData().getObjectNameRID( vm.getMathObjectRID() ),
										vm.getObjectRID() );

	assert( rid == vm.getMathObjectRID() );

	//---------------------------------------------------------------------------
	//Bind global object
	//---------------------------------------------------------------------------
	CVmObject* pObj = vm.createObject( vm.getMathObjectRID() );
	CVariable obj( pObj, OPERAND_FLAG( OPERAND_FLAG_DONTDELETE
									| OPERAND_FLAG_DONTENUM
									| OPERAND_FLAG_READONLY ) );

	//Set true as an object value..
	CVariable varBool( true );
	pObj->setValue( varBool );

	CG_SYMBOL_INFORMATION info = vm.querySymbolInformation( NAME_BUILTIN_MATH_OBJECT );
	vm.setStaticField( info.rid, obj, true );	//Force over write it


	//---------------------------------------------------------------------------
	// Bind System functions
	//---------------------------------------------------------------------------
	for( int32_t i = 0; i < ARRAYSIZE( initParams ); ++i )
	{
		int32_t iParams;
		iParams = (int32_t)RidFromToken( initParams[ i ].ridParam );
		if( isBuiltinRid( initParams[ i ].ridParam ) )
		{
			iParams = RidFromToken( -iParams ) - 1;
		}

		//-----------------------------------------------------------------------
		//Register methods
		//-----------------------------------------------------------------------
		bool b = vm.bindBuiltinMethod(
									wstring( initParams[ i ].pStrSymbol ),
									initParams[ i ].pMethod,
									iParams
									);
		if( !b )
			return false;
	}
	//Bind properties
	for( int32_t i = 0; i < ARRAYSIZE( initPropertyParams ); ++i )
	{
		CVariable* pvar;
		//-----------------------------------------------------------------------
		//Register methods
		//-----------------------------------------------------------------------
		switch( OperandType( initPropertyParams[ i ].operandType ) )
		{
		case OPERAND_FLOAT:
			pvar = new CVariable(  initPropertyParams[ i ].fValue,
									initPropertyParams[ i ].operandFlag );
			break;
		default:
			Debug_Fatal( "Not supported type" );
		}
		bool b = vm.bindBuiltinVariable( wstring( initPropertyParams[ i ].pStrSymbol ),
										pvar );
		if( !b )
			return false;
		delete pvar;
	}
	
	return true;
}

/***************************************************************************
 *      ctor method
 ***************************************************************************/
void CMathObject::ctor( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{

	CVariable obj = *pArguments;
	assert( obj.iOperandType == OPERAND_OBJECTREF );

	//Set prototype: String prototype object
	obj.refObject->setPrototypeObject( 
		&pVm->getPrototypeObject( pVm->getMathObjectRID() ) );

	return;
}

/***************************************************************************
 *      ceil method
 ***************************************************************************/
void CMathObject::ceil( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments == 1 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	//toFloat parameter
	float f = varParam.toFloat();
	f = ::ceil( f );

	pVm->pushEvalStack( f );
	return;
}

/***************************************************************************
 *      floor method
 ***************************************************************************/
void CMathObject::floor( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments == 1 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	//toFloat parameter
	float f = varParam.toFloat();
	f = ::floor( f );

	pVm->pushEvalStack( f );
	return;
}

/***************************************************************************
 *      random method
 ***************************************************************************/
void CMathObject::random( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	float f = float( ::rand() ) / float( RAND_MAX );
	pVm->pushEvalStack( f );
	return;
}

/***************************************************************************
 *      round method
 ***************************************************************************/
void CMathObject::round( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments == 1 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	//toFloat parameter
	float f = varParam.toFloat();

	int32_t i = (int32_t)::floor( f + 0.5f );
	pVm->pushEvalStack( i );
	return;
}

/***************************************************************************
 *      cos method
 ***************************************************************************/
void CMathObject::cos( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments == 1 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	//toFloat parameter
	float f = varParam.toFloat();
	f = ::cosf( f );

	pVm->pushEvalStack( f );
	return;
}

/***************************************************************************
 *      sin method
 ***************************************************************************/
void CMathObject::sin( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments == 1 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	//toFloat parameter
	float f = varParam.toFloat();
	f = ::sinf( f );

	pVm->pushEvalStack( f );
	return;
}

/***************************************************************************
 *      tan method
 ***************************************************************************/
void CMathObject::tan( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments == 1 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	//toFloat parameter
	float f = varParam.toFloat();
	f = ::tanf( f );

	pVm->pushEvalStack( f );
	return;
}

/***************************************************************************
 *      acos method
 ***************************************************************************/
void CMathObject::acos( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments == 1 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	//toFloat parameter
	float f = varParam.toFloat();
	f = ::acosf( f );

	pVm->pushEvalStack( f );
	return;
}

/***************************************************************************
 *      asin method
 ***************************************************************************/
void CMathObject::asin( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments == 1 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	//toFloat parameter
	float f = varParam.toFloat();
	f = ::asinf( f );

	pVm->pushEvalStack( f );
	return;
}

/***************************************************************************
 *      atan method
 ***************************************************************************/
void CMathObject::atan( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments == 1 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	//toFloat parameter
	float f = varParam.toFloat();
	f = ::atanf( f );

	pVm->pushEvalStack( f );
	return;
}

/***************************************************************************
 *      pow method
 ***************************************************************************/
void CMathObject::pow( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments <= 2 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	//toFloat parameter
	float f = varParam.toFloat();
	varParam = *pArguments ++;
	//toFloat parameter
	float f2 = varParam.toFloat();

	f = ::pow( f, f2 );

	pVm->pushEvalStack( f );
	return;
}


/***************************************************************************
 *      abs method
 ***************************************************************************/
void CMathObject::abs( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )
{
	assert( iNumArguments >= 1 );

	//Skip this
	pArguments++;

	if( iNumArguments == 1 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments++;
	varParam.convertToPrimitiveType( pVm );

	switch( varParam.getPrimitiveType() )
	{
	case OPERAND_INT:
		{
		//toFloat parameter
		int32_t i = varParam.toInt();
		i = i > 0 ? i : -i;
		pVm->pushEvalStack( i );
		}
		break;
	case OPERAND_INT64:
		{
		//toFloat parameter
		int64_t i = varParam.toInt64();
		i = i > 0 ? i : -i;
		pVm->pushEvalStack( i );
		}
		break;
	case OPERAND_DOUBLE:
		{
		//toFloat parameter
		double d = varParam.toDouble();
		d = ::fabs( d );

		pVm->pushEvalStack( d );
		}
		break;
	case OPERAND_STRING:
		{
			varParam.convertToString( pVm );
			bool b = CNumberObject::parseNumber( varParam, varParam.pString );
			if( !b )
				pVm->pushEvalStackNaN();
			else
			{
				switch( varParam.getPrimitiveType() )
				{
				case OPERAND_INT:
					{
					//toFloat parameter
					int32_t i = varParam.toInt();
					i = i > 0 ? i : -i;
					pVm->pushEvalStack( i );
					}
					break;
				case OPERAND_INT64:
					{
					//toFloat parameter
					int64_t i = varParam.toInt64();
					i = i > 0 ? i : -i;
					pVm->pushEvalStack( i );
					}
					break;
				case OPERAND_DOUBLE:
					{
					//toFloat parameter
					double d = varParam.toDouble();
					d = ::fabs( d );

					pVm->pushEvalStack( d );
					}
					break;
				case OPERAND_STRING:
					Debug_Fatal( "Illegal operand" );
					break;
				default:
				case OPERAND_FLOAT:
					{
					//toFloat parameter
					float f = varParam.toFloat();
					f = ::fabs( f );

					pVm->pushEvalStack( f );
					break;
					}
				}
			}

		}
		break;
	case OPERAND_NAN:
		pVm->pushEvalStackNaN();
		break;
	default:
	case OPERAND_FLOAT:
		{
		//toFloat parameter
		float f = varParam.toFloat();
		f = ::fabs( f );

		pVm->pushEvalStack( f );
		break;
		}
	}


	return;
}

/***************************************************************************
 *      atan2 property
 ***************************************************************************/
void CMathObject::atan2( CCilVm* const pVm,
									const int32_t iNumArguments, 
									CVariable* pArguments )

{
	assert( iNumArguments >= 1 );
	//Skip this
	pArguments ++;

	if( iNumArguments <= 2 )
	{
		pVm->pushEvalStackNaN();
		return;
	}

	CVariable& varParam = *pArguments ++;
	CVariable& varParam2 = *pArguments ++;

	//toFloat parameter
	float f = varParam.toFloat();
	float f2 = varParam2.toFloat();
	f = ::atan2f( f, f2 );

	pVm->pushEvalStack( f );
	return;
}

} //namespace CRI