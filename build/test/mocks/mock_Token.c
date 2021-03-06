/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_Token.h"

typedef struct _CMOCK_createOperatorToken_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  Token* ReturnVal;
  int CallOrder;
  char* Expected_symbol;
  Arity Expected_AR;

} CMOCK_createOperatorToken_CALL_INSTANCE;

typedef struct _CMOCK_createIntegerToken_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  Token* ReturnVal;
  int CallOrder;
  int Expected_value;

} CMOCK_createIntegerToken_CALL_INSTANCE;

static struct mock_TokenInstance
{
  int createOperatorToken_IgnoreBool;
  Token* createOperatorToken_FinalReturn;
  CMOCK_createOperatorToken_CALLBACK createOperatorToken_CallbackFunctionPointer;
  int createOperatorToken_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE createOperatorToken_CallInstance;
  int createIntegerToken_IgnoreBool;
  Token* createIntegerToken_FinalReturn;
  CMOCK_createIntegerToken_CALLBACK createIntegerToken_CallbackFunctionPointer;
  int createIntegerToken_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE createIntegerToken_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_Token_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.createOperatorToken_IgnoreBool)
    Mock.createOperatorToken_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.createOperatorToken_CallInstance, cmock_line, "Function 'createOperatorToken' called less times than expected.");
  if (Mock.createOperatorToken_CallbackFunctionPointer != NULL)
    Mock.createOperatorToken_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.createIntegerToken_IgnoreBool)
    Mock.createIntegerToken_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.createIntegerToken_CallInstance, cmock_line, "Function 'createIntegerToken' called less times than expected.");
  if (Mock.createIntegerToken_CallbackFunctionPointer != NULL)
    Mock.createIntegerToken_CallInstance = CMOCK_GUTS_NONE;
}

void mock_Token_Init(void)
{
  mock_Token_Destroy();
}

void mock_Token_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.createOperatorToken_CallbackFunctionPointer = NULL;
  Mock.createOperatorToken_CallbackCalls = 0;
  Mock.createIntegerToken_CallbackFunctionPointer = NULL;
  Mock.createIntegerToken_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

Token* createOperatorToken(char* symbol, Arity AR)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_createOperatorToken_CALL_INSTANCE* cmock_call_instance = (CMOCK_createOperatorToken_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.createOperatorToken_CallInstance);
  Mock.createOperatorToken_CallInstance = CMock_Guts_MemNext(Mock.createOperatorToken_CallInstance);
  if (Mock.createOperatorToken_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return (Token*)Mock.createOperatorToken_FinalReturn;
    Mock.createOperatorToken_FinalReturn = cmock_call_instance->ReturnVal;
    return (Token*)cmock_call_instance->ReturnVal;
  }
  if (Mock.createOperatorToken_CallbackFunctionPointer != NULL)
  {
    return Mock.createOperatorToken_CallbackFunctionPointer(symbol, AR, Mock.createOperatorToken_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'createOperatorToken' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'createOperatorToken' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'createOperatorToken' called later than expected.");
  {
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_symbol, symbol, cmock_line, "Function 'createOperatorToken' called with unexpected value for argument 'symbol'.");
  }
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_AR), (void*)(&AR), sizeof(Arity), cmock_line, "Function 'createOperatorToken' called with unexpected value for argument 'AR'.");
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_createOperatorToken(CMOCK_createOperatorToken_CALL_INSTANCE* cmock_call_instance, char* symbol, Arity AR)
{
  cmock_call_instance->Expected_symbol = symbol;
  memcpy(&cmock_call_instance->Expected_AR, &AR, sizeof(Arity));
}

void createOperatorToken_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, Token* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_createOperatorToken_CALL_INSTANCE));
  CMOCK_createOperatorToken_CALL_INSTANCE* cmock_call_instance = (CMOCK_createOperatorToken_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.createOperatorToken_CallInstance = CMock_Guts_MemChain(Mock.createOperatorToken_CallInstance, cmock_guts_index);
  Mock.createOperatorToken_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.createOperatorToken_IgnoreBool = (int)1;
}

void createOperatorToken_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* symbol, Arity AR, Token* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_createOperatorToken_CALL_INSTANCE));
  CMOCK_createOperatorToken_CALL_INSTANCE* cmock_call_instance = (CMOCK_createOperatorToken_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.createOperatorToken_CallInstance = CMock_Guts_MemChain(Mock.createOperatorToken_CallInstance, cmock_guts_index);
  Mock.createOperatorToken_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_createOperatorToken(cmock_call_instance, symbol, AR);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void createOperatorToken_StubWithCallback(CMOCK_createOperatorToken_CALLBACK Callback)
{
  Mock.createOperatorToken_CallbackFunctionPointer = Callback;
}

Token* createIntegerToken(int value)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_createIntegerToken_CALL_INSTANCE* cmock_call_instance = (CMOCK_createIntegerToken_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.createIntegerToken_CallInstance);
  Mock.createIntegerToken_CallInstance = CMock_Guts_MemNext(Mock.createIntegerToken_CallInstance);
  if (Mock.createIntegerToken_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return (Token*)Mock.createIntegerToken_FinalReturn;
    Mock.createIntegerToken_FinalReturn = cmock_call_instance->ReturnVal;
    return (Token*)cmock_call_instance->ReturnVal;
  }
  if (Mock.createIntegerToken_CallbackFunctionPointer != NULL)
  {
    return Mock.createIntegerToken_CallbackFunctionPointer(value, Mock.createIntegerToken_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'createIntegerToken' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'createIntegerToken' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'createIntegerToken' called later than expected.");
  {
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_value, value, cmock_line, "Function 'createIntegerToken' called with unexpected value for argument 'value'.");
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_createIntegerToken(CMOCK_createIntegerToken_CALL_INSTANCE* cmock_call_instance, int value)
{
  cmock_call_instance->Expected_value = value;
}

void createIntegerToken_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, Token* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_createIntegerToken_CALL_INSTANCE));
  CMOCK_createIntegerToken_CALL_INSTANCE* cmock_call_instance = (CMOCK_createIntegerToken_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.createIntegerToken_CallInstance = CMock_Guts_MemChain(Mock.createIntegerToken_CallInstance, cmock_guts_index);
  Mock.createIntegerToken_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.createIntegerToken_IgnoreBool = (int)1;
}

void createIntegerToken_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int value, Token* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_createIntegerToken_CALL_INSTANCE));
  CMOCK_createIntegerToken_CALL_INSTANCE* cmock_call_instance = (CMOCK_createIntegerToken_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.createIntegerToken_CallInstance = CMock_Guts_MemChain(Mock.createIntegerToken_CallInstance, cmock_guts_index);
  Mock.createIntegerToken_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_createIntegerToken(cmock_call_instance, value);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void createIntegerToken_StubWithCallback(CMOCK_createIntegerToken_CALLBACK Callback)
{
  Mock.createIntegerToken_CallbackFunctionPointer = Callback;
}

