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
 * Module   : cil Virtual Machine
 * File     : CCilVmOperatorCall.cpp
 * Date     : 
 * Version  : 
 *
 ****************************************************************************/

/***************************************************************************
 *      Include file
 ***************************************************************************/
#include "stdafx.h"
#include "criScript.h"
#include "cilVm.h"
namespace cri {
/***************************************************************************
 *      Variables
 ***************************************************************************/

/***************************************************************************
 *      call operator Methods
 ***************************************************************************/
void CCilVm::CallOperator( const CVariable* thisPointer, const RID tokenTarget, const bool bConstructor )
{
	//Expansion to the CRIScript
	//Accepts OBJECTREF (static field)

	assert( m_CallStack.size() <= MAX_CALLSTACK );

	METHOD_DEF* pMethod;
	int32_t iIndex;
	bool b;
	VM_CALLSTACK* currentcallstack = getCurrentCallStack( VM_CALLSTACK_CALLSTACK );
	//Check if an argumentlist size match the function signature
	m_iNumGivenArguments = getCurrentArgumentListIndex()
	- ( currentcallstack->iNumArgument + currentcallstack->iArgumentListStartIndex );
	
	switch( TypeFromToken( tokenTarget ) )
	{
	case MDT_METHODDEF:
		pMethod = &m_MetaData.getMethod( tokenTarget );
		break;
	case MDT_FIELDDEF:
		{
		//Retrieve static field value
		iIndex = RidFromToken( tokenTarget );
		CVariable& var = m_pStaticFieldTable[ iIndex ];

		if( OperandType( var.iOperandType ) != OPERAND_OBJECTREF
			|| var.refObject == NULL )
		{
			b = ThrowExceptionFromVm( &wstring( ERRORSTRING_ILLEGALCALL ),
				&wstring( NAME_BUILTIN_ERROR_OBJECT ),
				ERROR_ILLEGALCALL );
			if( !b )
			{
				//Exception not handled.
				//need to clear arg list and push something in the stack
				pushEvalStackUndefined();
				disposeArgumentList( m_iNumGivenArguments );
			}
			return;
		}

		RID ridCall = var.refObject->getCall();
		assert( TypeFromToken( ridCall ) == MDT_METHODDEF );
		pMethod = &m_MetaData.getMethod( ridCall );
		thisPointer = &var;
		}
		break;
	default:
		b = ThrowExceptionFromVm( &wstring( ERRORSTRING_ILLEGALCALL ),
			&wstring( NAME_BUILTIN_ERROR_OBJECT ),
			ERROR_ILLEGALCALL );
		if( !b )
		{
			//Exception not handled.
			//need to clear arg list and push something in the stack
			pushEvalStackUndefined();
			disposeArgumentList( m_iNumGivenArguments );
		}
		return;
	}

	//Store this object
	CVariable * pArgumentStart;
	
	if( m_iNumGivenArguments > 0 )
	{
		//Start of next callstack
		pArgumentStart = m_ArgList
							+ currentcallstack->iArgumentListStartIndex
							+ currentcallstack->iNumArgument;
		//Thus the room for the this pointer is reserved already
		if( thisPointer != NULL )
		{
			//Does not copy flags
			*pArgumentStart = *thisPointer;
			pArgumentStart->iOperandFlag = OPERAND_FLAG_NONE;
		}
		else
		{
			//Copy current 'this' object
			*pArgumentStart = m_ArgList[ currentcallstack->iArgumentListStartIndex ];
		}

	}
	else
	{
		//Need to prepare the room for myself
		if( thisPointer != NULL )
		{
			storeArgumentList( *thisPointer );
		}
		else
		{
			//Copy current 'this' object
			storeArgumentList( m_ArgList[ currentcallstack->iArgumentListStartIndex ] );
		}
		//Now this pointer is on the stack
		m_iNumGivenArguments++;

		//Start of next callstack
		pArgumentStart = m_ArgList
							+ currentcallstack->iArgumentListStartIndex
							+ currentcallstack->iNumArgument;
	}

	switch( MethodType( pMethod->MethodType ) )
	{
	case METHOD_NATIVE:
		{
		assert( pMethod->lpFunction != NULL );
		((PDEFAULTMETHOD)pMethod->lpFunction)( this,
											m_iNumGivenArguments,
											pArgumentStart );
		
		//Dispose arglist
		disposeArgumentList( m_iNumGivenArguments );
		}
		break;
	case METHOD_WRAPPED:
		{
		assert( pMethod->lpFunction != NULL );
		((PWRAPPEDMETHOD)pMethod->lpFunction)( this,
											m_iNumGivenArguments,
											pArgumentStart,
											(PMETHOD)pMethod->lpFunctionBody );
		
		//Dispose arglist
		disposeArgumentList( m_iNumGivenArguments );
		}
		break;
	case METHOD_CIL:
		{
		VM_CALLSTACK callstack;

		if( !pMethod->bRestArgments )
		{
			//Regular pass

			//Fill in arguments if not supplied enough
			if( m_iNumGivenArguments < pMethod->iNumArgments )
			{
				for( int32_t i = 0; i < pMethod->iNumArgments - m_iNumGivenArguments; i++ )
					pushArgumentListUndefined();
			} else if( m_iNumGivenArguments > pMethod->iNumArgments )
			{
				for( int32_t i = 0; i <  m_iNumGivenArguments - pMethod->iNumArgments; i++ )
					popArgumentList();
			}
		}
		else
		{
			//Need to generate restArgs
			//Fill in arguments if not supplied enough
			if( m_iNumGivenArguments < pMethod->iNumArgments )
			{
				for( int32_t i = 0; i < pMethod->iNumArgments - m_iNumGivenArguments; i++ )
					pushArgumentListUndefined();
			} else
			{
				generateRestArguments( m_iNumGivenArguments - pMethod->iNumArgments + 1 ); 
				m_iNumGivenArguments = pMethod->iNumArgments;
			}
		}

		callstack.type = VM_CALLSTACK_CALLSTACK;
		callstack.status = VM_EHCLAUSE_NORMAL;
		callstack.pInstruction = m_pCurrentInstruction;
		callstack.ridMethod = tokenTarget;
		callstack.iLocalVariableStartIndex = getCurrentLocalVariableIndex();
		callstack.iArgumentListStartIndex = getCurrentArgumentListIndex() - pMethod->iNumArgments;
		callstack.iNumArgument = pMethod->iNumArgments;
		callstack.iNumGivenArgument = m_iNumGivenArguments;
		callstack.bConstructor = bConstructor;
		m_CallStack.push_back( callstack );
		m_pCurrentInstruction = &m_CurrentILPool.ILPool[ pMethod->iILOffset ];
		m_iCurrentThisPointerIndex = callstack.iArgumentListStartIndex;

		//Note
		//Arguments are already in the arglist in the last call stack

		//Reserve local variable slot
		reserveLocalVariables( pMethod->ridLocalVariableList );
		break;
		}
	case METHOD_EHCLAUSE:
	default:
		Debug_Fatal( "Illegal Method type" );
		break;
	}
	return;
}

/***************************************************************************
 *      call operator / regular call
 ***************************************************************************/
void CCilVm::CallOperator()
{
	RID tokenTarget = getNextToken();
	CallOperator( NULL, tokenTarget );
	return;
}

/***************************************************************************
 *      Callt operator / variable call
 ***************************************************************************/
void CCilVm::CallOperator( const CVariable& var )
{
	assert( OperandType( var.iOperandType ) == OPERAND_OBJECTREF );
	CallOperator( &var.refObject->getParentVariable(), var.refObject->getCall() );
	return;
}

/***************************************************************************
 *      Ret operator Methods
 ***************************************************************************/
bool CCilVm::RetOperator()
{
	if( m_CallStack.size() == m_iCallStackRoot )	//Return from global scope
	{
		return false;
	}
	//Clean up eval stack??
	//----------------------------------------------------------

	VM_CALLSTACK* callstack = getCurrentCallStack();

	//check if EH clause is on the top of the stack
	if( callstack->type == VM_CALLSTACK_EH )
	{
		//If return from inside 'catch'..
		if( callstack->status == VM_EHCLAUSE_EXECUTING_CATCH )
		{
			//Remove EH object
			disposeArgumentList( 1 );
			VM_CALLSTACK* pCurrentCallstack = getCurrentCallStack( VM_CALLSTACK_CALLSTACK );
			pCurrentCallstack->iNumArgument --;

			callstack->status = VM_EHCLAUSE_EXECUTED_CATCH;
		}
		else if( callstack->status == VM_EHCLAUSE_RETURNING )
		{
			//'return' call from inside finally clause.
			getEvalStackSecondEntry() = getEvalStackFirstEntry();
			popEvalStack();
		}

		//Invoke finally node if given
		if( callstack->ridFinally != 0 )
		{
			LeaveOperator();
			callstack->status = VM_EHCLAUSE_RETURNING;
			return true;
		}

		//Pop finally clause
		m_CallStack.pop_back();

		return RetOperator();

	}
	if( !callstack->bConstructor )
	{
		//Not a ctor call
		//# eval stack entry should be 1
		//assert( m_OperandEvalStack.size() == 1 );
		//Eval stack canbe 1 or more
	}
	else
	{
		//ctor call
		//avoid a return value, and left objref on the stack
		popEvalStack();
	}

	//Dispose local variable
	disposeLocalVariables( getCurrentLocalVariableIndex() - callstack->iLocalVariableStartIndex );
	//Dispose arglist
	disposeArgumentList( callstack->iNumArgument );

	m_CallStack.pop_back();
	m_pCurrentInstruction = callstack->pInstruction;
	m_iCurrentThisPointerIndex = callstack->iArgumentListStartIndex;
	return true;
}

} //namespace CRI