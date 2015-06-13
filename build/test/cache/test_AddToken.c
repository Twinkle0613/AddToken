#include "Token.h"
#include "AddToken.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_add2Token_given_2_plus_3_should_return_the_token_tree()



{

   OperatorToken *Tk;



   Tk = (OperatorToken*)add2Tokens(1,"+",2);



   UnityAssertEqualNumber((_U_SINT)(("+")), (_U_SINT)((Tk->symbol)), (((void *)0)), (_U_UINT)46, UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((_U_SINT)((TOKEN_OPERATOR_TYPE)), (_U_SINT)((Tk->type)), (((void *)0)), (_U_UINT)47, UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((_U_SINT)((INFIX)), (_U_SINT)((Tk->arity)), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((_U_SINT)((TOKEN_INTEGER_TYPE)), (_U_SINT)((Tk->token[0]->type)), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);



   IntegerToken *int1 = (IntegerToken*)Tk->token[0];

   IntegerToken *int2 = (IntegerToken*)Tk->token[1];

   printf("\nTk->token[0]->value = %d\nTk->token[1]->value = %d",int1->value,int2->value);



   UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((int1->value)), (((void *)0)), (_U_UINT)55, UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((int2->value)), (((void *)0)), (_U_UINT)56, UNITY_DISPLAY_STYLE_INT);











}
