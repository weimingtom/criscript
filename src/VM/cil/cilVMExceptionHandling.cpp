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
 * Module   : cil Virtual Machine Exception handler
 * File     : cilVMExceptionHandling.cpp
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
 *      Throw exception operator
 ***************************************************************************/
bool CCilVm::ThrowOperator()
{
	//Rewind the stack!!
	VM_CALLSTACK* pHandler = getCurrentCallStack();
	if( pHandler->status != 0 )
	{
		if( pHandler->status == VM_EHCLAUSE_EXECUTING_CATCH )
		{
			//Dispose current argument
			disposeArgumentList( 1 );
			VM_CALLSTACK* pCurrentCallstack = getCurrentCallStack( VM_CALLSTACK_CALLSTACK );
			pCurrentCallstack->iNumArgument --;
		}

		//Jump to 'leave'.
		pHandler->status = VM_EHCLAUSE_EXECUTING_FINALLY;
		pHandler->ridCatch = RID_NEED_CATCHCLAUSE;
		m_pCurrentInstruction = pHandler->pInstruction;
		return true;
	}

	//Look into call stack if catch clause is provided
	vector< VM_CALLSTACK >::reverse_iterator itBegin = m_CallStack.rbegin();
	vector< VM_CALLSTACK >::reverse_iterator itEnd = m_CallStack.rend() - 1;
	bool bEHFound = false;
	while( itBegin != itEnd )
	{
		if( itBegin->type == VM_CALLSTACK_EH )
		{
			bEHFound = true;
			break;	
		}
		++itBegin;
	}

	if( !bEHFound )
	{
		//Or Exception not handled!
		Debug_Warning( "Unhandled exception!!\n" );
		if( m_Handler[ VM_HANDLER_EXCEPTIONNOTHANDLED ] )
		{
			m_Handler[ VM_HANDLER_EXCEPTIONNOTHANDLED ]( 0, &getEvalStackFirstEntry() );
		}
		else
		{
			Debug_Warning( "No default exception handler provided\n" );
		}

		//Pop error object
		popEvalStack();
		return false;
	}

	while( pHandler->type != VM_CALLSTACK_EH )
	{
		if( m_CallStack.size() == 1 )
		{
			//Or Exception not handled!
			Debug_Warning( "Unhandled exception!!\n" );
			if( m_Handler[ VM_HANDLER_EXCEPTIONNOTHANDLED ] )
			{
				m_Handler[ VM_HANDLER_EXCEPTIONNOTHANDLED ]( 0, &getEvalStackFirstEntry() );
			}
			else
			{
				Debug_Warning( "No default exception handler provided\n" );
			}
			return false;
		}
		//Dispose local variable
		disposeLocalVariables( getCurrentLocalVariableIndex() - pHandler->iLocalVariableStartIndex );
		//Dispose arglist
		disposeArgumentList( pHandler->iNumArgument );

		m_CallStack.pop_back();

		pHandler = getCurrentCallStack();
	}
	
	VM_CALLSTACK* pCurrentCallstack = getCurrentCallStack( VM_CALLSTACK_CALLSTACK );
	m_iCurrentThisPointerIndex = pCurrentCallstack->iArgumentListStartIndex;

	//I got EH clause
	if( pHandler->ridCatch != 0 )
	{
		assert( TypeFromToken( pHandler->ridCatch ) == MDT_METHODDEF );
		
		METHOD_DEF* pMethod;
		pMethod = &m_MetaData.getMethod( pHandler->ridCatch );
		assert( MethodType( pMethod->MethodType ) == METHOD_CIL );

		//tweak arglist

		//Inc the # of arg
		pCurrentCallstack->iNumArgument++;

		getEvalStackFirstEntry().moveTo( m_ArgList[ m_iArgListIndex ] );
		updateArgListIndex();
		popEvalStackFast();
		
		//Invoke catch clause
		pHandler->ridCatch = 0;
		pHandler->status = VM_EHCLAUSE_EXECUTING_CATCH;

		m_pCurrentInstruction = &m_CurrentILPool.ILPool[ pMethod->iILOffset ];

		//Need to store an offset of leave ops.
		pMethod = &m_MetaData.getMethod( pHandler->ridMethod );
		assert( MethodType( pMethod->MethodType ) == METHOD_EHCLAUSE );
		pHandler->pInstruction = &m_CurrentILPool.ILPool[ pMethod->iILOffset ];

		return true;
	}
	else if( pHandler->ridFinally != 0 )
	{
		//Does not dispose it!!
		//Dispose throw argument
		//popEvalStack();

		//Invoke finally clause
		assert( TypeFromToken( pHandler->ridFinally ) == MDT_METHODDEF );
		
		METHOD_DEF* pMethod;
		pMethod = &m_MetaData.getMethod( pHandler->ridFinally );
		assert( MethodType( pMethod->MethodType ) == METHOD_CIL );
		
		//When I back here in future, finally/catch node is already executed
		//Good luck
		pHandler->ridFinally = 0;
		pHandler->status = VM_EHCLAUSE_EXECUTING_FINALLY;
		m_pCurrentInstruction = &m_CurrentILPool.ILPool[ pMethod->iILOffset ];

		//Need to store an offset of leave ops.
		pMethod = &m_MetaData.getMethod( pHandler->ridMethod );
		assert( MethodType( pMethod->MethodType ) == METHOD_EHCLAUSE );
		pHandler->pInstruction = &m_CurrentILPool.ILPool[ pMethod->iILOffset ];

		//Still need to execute catch clause...
		pHandler->ridCatch = RID_NEED_CATCHCLAUSE;

		return true;
	}
	else
	{
		//Or Exception not handled.
		//It's fine by the spec
	}

	return true;
}

/***************************************************************************
 *      Enter operator
 ***************************************************************************/
void CCilVm::EnterOperator()
{
	RID tokenTarget = getNextToken();
	assert( TypeFromToken( tokenTarget ) == MDT_METHODDEF );
	assert( m_CallStack.size() <= MAX_CALLSTACK );

	METHOD_DEF* pMethod;
	pMethod = &m_MetaData.getMethod( tokenTarget );

	VM_CALLSTACK callstack;
	callstack.type = VM_CALLSTACK_EH;
	callstack.pInstruction = 0;
	callstack.status = VM_EHCLAUSE_NORMAL;
	callstack.ridMethod = tokenTarget;
	callstack.ridCatch = pMethod->ridCatch;
	callstack.ridFinally = pMethod->ridFinally;
	callstack.iNumArgument = (uint32_t)getEvalStackSize();
	callstack.bConstructor = false;
	m_CallStack.push_back( callstack );

	//Increase exception handler level
	m_ExceptionHandlerNestingLevel++;

	return;
}

/***************************************************************************
 *      Leave operator Methods
 ***************************************************************************/
void CCilVm::LeaveOperator()
{
	VM_CALLSTACK* pHandler = getCurrentCallStack();
	if( pHandler->type != VM_CALLSTACK_EH )
	{
		return;
	}

	//Now IP point this 'leave' ops
	m_pCurrentInstruction--;

	if( pHandler->status == VM_EHCLAUSE_EXECUTING_CATCH )
	{
		//EH object
		disposeArgumentList( 1 );
		VM_CALLSTACK* pCurrentCallstack = getCurrentCallStack( VM_CALLSTACK_CALLSTACK );
		pCurrentCallstack->iNumArgument--;
		
		//Restore instruction pointer
		m_pCurrentInstruction = pHandler->pInstruction;
	}

	if( pHandler->ridFinally != 0 )
	{
		//Invoke finally clause
		assert( TypeFromToken( pHandler->ridFinally ) == MDT_METHODDEF );
		
		METHOD_DEF* pMethod;
		pMethod = &m_MetaData.getMethod( pHandler->ridFinally );
		assert( MethodType( pMethod->MethodType ) == METHOD_CIL );
		
		//When I back here in future, finally/catch node is already executed
		//Good luck
		if( pHandler->ridCatch != RID_NEED_CATCHCLAUSE )
			pHandler->ridCatch = 0;
		pHandler->ridFinally = 0;
		pHandler->status = VM_EHCLAUSE_EXECUTING_FINALLY;

		pHandler->pInstruction = m_pCurrentInstruction;
		m_pCurrentInstruction = &m_CurrentILPool.ILPool[ pMethod->iILOffset ];
		return;
	}

	if( pHandler->status == VM_EHCLAUSE_RETURNING )
	{
		//Decrease exception handler level
		m_ExceptionHandlerNestingLevel--;
		//Good bye try clause
		m_CallStack.pop_back();
		RetOperator();
		return;
	}

	//Now I'm back from the finally clause
	if( pHandler->pInstruction )
	{
		m_pCurrentInstruction = pHandler->pInstruction;
	}

	//Now point next instruction
	m_pCurrentInstruction++;

	if( pHandler->ridCatch == RID_NEED_CATCHCLAUSE )
	{
		//Decrease exception handler level
		m_ExceptionHandlerNestingLevel--;

		//Executed final clause however still need to seek catch clause
		m_CallStack.pop_back();

		ThrowOperator();
	}
	else
	{
		if( pHandler->iNumArgument + 1 != (uint32_t)getEvalStackSize() )
		{
			//Decrease exception handler level
			m_ExceptionHandlerNestingLevel--;

			//Good bye try clause
			m_CallStack.pop_back();
			return;
		}
		//Decrease exception handler level
		m_ExceptionHandlerNestingLevel--;

		//Good bye try clause
		m_CallStack.pop_back();
	}

	return;
}

/***************************************************************************
 *      Finally operator Methods
 ***************************************************************************/
void CCilVm::FinallyOperator()
{
	VM_CALLSTACK* pHandler = getCurrentCallStack();
	if( pHandler->type != VM_CALLSTACK_EH )
	{
		return;
	}

	//Now IP point this 'leave' ops
	m_pCurrentInstruction--;

	if( pHandler->status == VM_EHCLAUSE_EXECUTING_CATCH )
	{
		//EH object
		disposeArgumentList( 1 );
		VM_CALLSTACK* pCurrentCallstack = getCurrentCallStack( VM_CALLSTACK_CALLSTACK );
		pCurrentCallstack->iNumArgument --;
		
	}

	if( pHandler->ridFinally != 0 )
	{
		//Invoke finally clause
		assert( TypeFromToken( pHandler->ridFinally ) == MDT_METHODDEF );
		
		METHOD_DEF* pMethod;
		pMethod = &m_MetaData.getMethod( pHandler->ridFinally );
		assert( MethodType( pMethod->MethodType ) == METHOD_CIL );
		
		//When I back here in future, finally/catch node is already executed
		//Good luck
		if( pHandler->ridCatch != RID_NEED_CATCHCLAUSE )
			pHandler->ridCatch = 0;
		pHandler->ridFinally = 0;
		pHandler->status = VM_EHCLAUSE_EXECUTING_FINALLY;

		pHandler->pInstruction = m_pCurrentInstruction;
		m_pCurrentInstruction = &m_CurrentILPool.ILPool[ pMethod->iILOffset ];
		return;
	}

	if( pHandler->status == VM_EHCLAUSE_RETURNING )
	{
		//Good bye try clause
		m_CallStack.pop_back();
		RetOperator();
		return;
	}

	//Now point next instruction
	m_pCurrentInstruction++;
	
	//Good bye try clause
	m_CallStack.pop_back();

	return;
}

/***************************************************************************
 *      Throw an exception from the API
 *      Exposed API
 ***************************************************************************/
void CCilVm::throwException( CVariable* pvarError )
{
	pushEvalStack( *pvarError );
	disposeArgumentList( m_iNumGivenArguments );
	ThrowOperator();
	m_iNumGivenArguments = 0;
	return;
}

/***************************************************************************
 *      Throw an exception
 ***************************************************************************/
void CCilVm::throwException( wstring* pstrMessage, wstring* pstrName, int32_t iNumber )
{
	CVariable obj;

	CVmObject* pObj = createObject( m_ridErrorObject );
	obj.setObjectRef( pObj );

	//Set prototype: String prototype object
	obj.refObject->setPrototypeObject( 
		&getPrototypeObject( m_ridErrorObject ) );

	CVariable var( pstrMessage, OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ) );
	obj.refObject->setProperty( NAME_BUILTIN_ERROR_PROPERTY_MESSAGE, var );
	
	if( pstrName != NULL )
	{
		CVariable varString( pstrName,
							OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ) );
		obj.refObject->setProperty( NAME_BUILTIN_ERROR_PROPERTY_NAME, varString );
	}
	CVariable varInt( iNumber,
					 OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ) );
	obj.refObject->setProperty( NAME_BUILTIN_ERROR_PROPERTY_NUMBER, varInt );

	//Push the ObjectRef to a eval stack
	pushEvalStackVariable( obj );

	disposeArgumentList( m_iNumGivenArguments );

	////Current instruction index is decremented in the ThrowOperator for throw instruction to keep IP of throw.
	////However since this routine is called from inside a VM, it does not have to be adjusted
	//m_pCurrentInstruction++;
	ThrowOperator();
	m_iNumGivenArguments = 0;
	return;
}

/***************************************************************************
 *      Throw an exception from inside the VM
 ***************************************************************************/
bool CCilVm::ThrowExceptionFromVm( wstring* pstrMessage, wstring* pstrName, int32_t iNumber )
{
	CVariable obj;

	CVmObject* pObj = createObject( m_ridErrorObject );
	obj.setObjectRef( pObj );

	//Set prototype: String prototype object
	obj.refObject->setPrototypeObject( 
		&getPrototypeObject( m_ridErrorObject ) );

	CVariable var( pstrMessage, OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ) );
	obj.refObject->setProperty( NAME_BUILTIN_ERROR_PROPERTY_MESSAGE, var );
	
	if( pstrName != NULL )
	{
		CVariable varString( pstrName,
							OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ) );
		obj.refObject->setProperty( NAME_BUILTIN_ERROR_PROPERTY_NAME, varString );
	}

	CVariable varInt( iNumber,
					 OPERAND_FLAG( OPERAND_FLAG_READONLY | OPERAND_FLAG_DONTENUM | OPERAND_FLAG_DONTDELETE ) );
	obj.refObject->setProperty( NAME_BUILTIN_ERROR_PROPERTY_NUMBER, varInt );

	//Push the ObjectRef to a eval stack
	pushEvalStackVariable( obj );

	//Does not dispose argument since those are not disposed after the throw call
	return ThrowOperator();
}

} //namespace CRI