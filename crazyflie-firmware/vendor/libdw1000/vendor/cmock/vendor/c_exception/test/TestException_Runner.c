/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_BasicTryDoesNothingIfNoThrow(void);
extern void test_BasicThrowAndCatch(void);
extern void test_BasicThrowAndCatch_WithMiniSyntax(void);
extern void test_VerifyVolatilesSurviveThrowAndCatch(void);
extern void test_ThrowFromASubFunctionAndCatchInRootFunc(void);
extern void test_ThrowAndCatchFromASubFunctionAndRethrowToCatchInRootFunc(void);
extern void test_ThrowAndCatchFromASubFunctionAndNoRethrowToCatchInRootFunc(void);
extern void test_ThrowAnErrorThenEnterATryBlockFromWithinCatch_VerifyThisDoesntCorruptExceptionId(void);
extern void test_ThrowAnErrorThenEnterATryBlockFromWithinCatch_VerifyThatEachExceptionIdIndependent(void);
extern void test_CanHaveMultipleTryBlocksInASingleFunction(void);
extern void test_CanHaveNestedTryBlocksInASingleFunction_ThrowInside(void);
extern void test_CanHaveNestedTryBlocksInASingleFunction_ThrowOutside(void);
extern void test_AThrowWithoutATryCatchWillUseDefaultHandlerIfSpecified(void);
extern void test_AThrowWithoutOutsideATryCatchWillUseDefaultHandlerEvenAfterTryCatch(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test/TestException.c";
  UnityBegin();
  RUN_TEST(test_BasicTryDoesNothingIfNoThrow, 16);
  RUN_TEST(test_BasicThrowAndCatch, 37);
  RUN_TEST(test_BasicThrowAndCatch_WithMiniSyntax, 56);
  RUN_TEST(test_VerifyVolatilesSurviveThrowAndCatch, 76);
  RUN_TEST(test_ThrowFromASubFunctionAndCatchInRootFunc, 105);
  RUN_TEST(test_ThrowAndCatchFromASubFunctionAndRethrowToCatchInRootFunc, 148);
  RUN_TEST(test_ThrowAndCatchFromASubFunctionAndNoRethrowToCatchInRootFunc, 167);
  RUN_TEST(test_ThrowAnErrorThenEnterATryBlockFromWithinCatch_VerifyThisDoesntCorruptExceptionId, 184);
  RUN_TEST(test_ThrowAnErrorThenEnterATryBlockFromWithinCatch_VerifyThatEachExceptionIdIndependent, 202);
  RUN_TEST(test_CanHaveMultipleTryBlocksInASingleFunction, 229);
  RUN_TEST(test_CanHaveNestedTryBlocksInASingleFunction_ThrowInside, 254);
  RUN_TEST(test_CanHaveNestedTryBlocksInASingleFunction_ThrowOutside, 281);
  RUN_TEST(test_AThrowWithoutATryCatchWillUseDefaultHandlerIfSpecified, 308);
  RUN_TEST(test_AThrowWithoutOutsideATryCatchWillUseDefaultHandlerEvenAfterTryCatch, 319);

  return (UnityEnd());
}