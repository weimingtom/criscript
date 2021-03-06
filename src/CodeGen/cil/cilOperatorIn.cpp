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
 * Module   : In Operator
 * File     : cilOperatorIn.cpp
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

/***************************************************************************
 *      Methods
 ***************************************************************************/

/***************************************************************************
 * instanceOf Operation
 ***************************************************************************/	
CCgNodeData* CCilCodeGen::inOperator( CCgNodeData* lhs, CCgNodeData* rhs )
{
	assert( lhs != NULL );
	assert( rhs != NULL );
	CCgNodeData* Node;

	Node = makeFormulaNode( CG_IN, lhs, rhs );

	return Node;
};
/***************************************************************************
 * emit instanceOf Operation
  ***************************************************************************/	
CCgNodeData* CCilCodeGen::emitInOperator( CCgNodeData* nodetree )
{
	assert( nodetree != NULL );
	assert( nodetree->NodeType == CG_NODE_FORMULANODE );

	CCgNodeData* ptr = nodetree->lhsNode;
	emitLoadStack( ptr );

	//Right hand side
	ptr = nodetree->rhsNode;
	emitLoadStack( ptr );

	emit( CEE_EXT_STARGLIST_S, (uint8_t)2 );	//Move to arglist
	emit( CEE_CALL, m_ridMethodIn );

	return nodetree;
}

} //namespace CRI