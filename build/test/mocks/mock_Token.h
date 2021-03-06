/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_TOKEN_H
#define _MOCK_TOKEN_H

#include "Token.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_Token_Init(void);
void mock_Token_Destroy(void);
void mock_Token_Verify(void);




#define createOperatorToken_IgnoreAndReturn(cmock_retval) createOperatorToken_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void createOperatorToken_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, Token* cmock_to_return);
#define createOperatorToken_ExpectAndReturn(symbol, AR, cmock_retval) createOperatorToken_CMockExpectAndReturn(__LINE__, symbol, AR, cmock_retval)
void createOperatorToken_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* symbol, Arity AR, Token* cmock_to_return);
typedef Token* (* CMOCK_createOperatorToken_CALLBACK)(char* symbol, Arity AR, int cmock_num_calls);
void createOperatorToken_StubWithCallback(CMOCK_createOperatorToken_CALLBACK Callback);
#define createIntegerToken_IgnoreAndReturn(cmock_retval) createIntegerToken_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void createIntegerToken_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, Token* cmock_to_return);
#define createIntegerToken_ExpectAndReturn(value, cmock_retval) createIntegerToken_CMockExpectAndReturn(__LINE__, value, cmock_retval)
void createIntegerToken_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int value, Token* cmock_to_return);
typedef Token* (* CMOCK_createIntegerToken_CALLBACK)(int value, int cmock_num_calls);
void createIntegerToken_StubWithCallback(CMOCK_createIntegerToken_CALLBACK Callback);

#endif
