#include "Token.h"
#include "unity.h"


void setUp(void){}



void tearDown(void){}



void test_createOperatorToken(void){





 OperatorToken *OpTK = malloc(sizeof(OperatorToken)+(sizeof(Token*)*2));







 OpTK=(OperatorToken*)createOperatorToken("+",INFIX);



 UnityAssertEqualNumber((_U_SINT)(("+")), (_U_SINT)((OpTK->symbol)), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((INFIX)), (_U_SINT)((OpTK->arity)), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((TOKEN_OPERATOR_TYPE)), (_U_SINT)((OpTK->type)), (((void *)0)), (_U_UINT)20, UNITY_DISPLAY_STYLE_INT);



}







void test_createIntegerToken(void){



 IntegerToken *InTk = malloc(sizeof(IntegerToken));



 InTk =(IntegerToken*)createIntegerToken(9);



 UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((InTk->value)), (((void *)0)), (_U_UINT)32, UNITY_DISPLAY_STYLE_INT);

 printf("InTk->value = %d", InTk->value);



 UnityAssertEqualNumber((_U_SINT)((TOKEN_INTEGER_TYPE)), (_U_SINT)((InTk->type)), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);





}
