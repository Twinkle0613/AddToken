#include "unity.h"
#include "AddToken.h"
//#include "mock_Token.h"
#include "Token.h"
#include <malloc.h>
void setUp(void)
{
}

void tearDown(void)
{
}

void test_add2Token_given_2_plus_3_should_return_the_token_tree()

{
	
/* 		 IntegerToken	*left = malloc(sizeof(IntegerToken));
		IntegerToken	*right = malloc(sizeof(IntegerToken));
	 
		left->value = 1;
		left->type = TOKEN_INTEGER_TYPE;
	
		right->value = 2;
		right->type = TOKEN_INTEGER_TYPE;
	

			OperatorToken *OP = malloc(sizeof(OperatorToken)+(sizeof(Token*)*2));
			
			OP->symbol = "+";
			OP->arity = INFIX;
			OP->type = TOKEN_OPERATOR_TYPE; 
			
			//createOperatorToken_ExpectAndReturn("+",INFIX,(Token*)OP);
			// it is XXXXX_ExpectAndReturn need to follow the .c file of sequence?
			
			//createIntegerToken_ExpectAndReturn(1,(Token*)left);
			//createIntegerToken_ExpectAndReturn(2,(Token*)right); */
			
			
			
			OperatorToken *Tk;
			
			Tk = (OperatorToken*)add2Tokens(1,"+",2);
			
			TEST_ASSERT_EQUAL("+",Tk->symbol);
			TEST_ASSERT_EQUAL(TOKEN_OPERATOR_TYPE,Tk->type);
			TEST_ASSERT_EQUAL(INFIX,Tk->arity);
			TEST_ASSERT_EQUAL(TOKEN_INTEGER_TYPE,Tk->token[0]->type);
		
			IntegerToken *int1 = (IntegerToken*)Tk->token[0];
			IntegerToken *int2 = (IntegerToken*)Tk->token[1];
			printf("\nTk->token[0]->value = %d\nTk->token[1]->value = %d",int1->value,int2->value);

			TEST_ASSERT_EQUAL(1,int1->value);
			TEST_ASSERT_EQUAL(2,int2->value);
			

			//TEST_ASSERT_EQUAL(2,Tk->token[1]->value);
		
	
}