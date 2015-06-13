#include "unity.h"
#include "Token.h"
#include <malloc.h>

void setUp(void){}

void tearDown(void){}

void test_createOperatorToken(void){
	

	OperatorToken *OpTK = malloc(sizeof(OperatorToken)+(sizeof(Token*)*2));

	//Token *createOperatorToken(char *symbol, Arity AR);
	
	OpTK=(OperatorToken*)createOperatorToken("+",INFIX);
	
	TEST_ASSERT_EQUAL("+",OpTK->symbol);
	TEST_ASSERT_EQUAL(INFIX,OpTK->arity);
	TEST_ASSERT_EQUAL(TOKEN_OPERATOR_TYPE,OpTK->type);
	//TEST_ASSERT_EQUAL()
}



void test_createIntegerToken(void){
	
	IntegerToken *InTk = malloc(sizeof(IntegerToken));
	
	InTk =(IntegerToken*)createIntegerToken(9);
	
	TEST_ASSERT_EQUAL(9,InTk->value);
	printf("InTk->value = %d", InTk->value);
	
	TEST_ASSERT_EQUAL(TOKEN_INTEGER_TYPE,InTk->type);
	
	
}