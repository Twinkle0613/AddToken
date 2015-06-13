#include "AddToken.h"
#include "Token.h"
#include <malloc.h>

/**
 * This AddToken function is store two integer token and "+" operation token to make a tree.
 * Eg.
 *						+
 *          /  \
 *         2   3
 * Input:
 *  leftValue    the value of left-hand side of tree
 *  operatorSymbol  the operator Symbol of tree eg. "+","-"..
 *	rightValue	 the value of right-hand side of tree
 *
 * Return:
 *    that are return a tree that data type is Token
 *
 */
 
Token* add2Tokens(int leftValue, char *operatorSymbol, int rightValue){
	 

	OperatorToken *OP = malloc(sizeof(OperatorToken)+(sizeof(Token*)*2));
	
	OP = (OperatorToken *)createOperatorToken(operatorSymbol,INFIX);
	
	OP->type = TOKEN_OPERATOR_TYPE;
	OP->token[0] = createIntegerToken(leftValue);
	OP->token[1] = createIntegerToken(rightValue);

	
	
	return (Token*)OP;
	
}

