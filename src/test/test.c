/***********************************************************************************
 *                                                                                 *
 * NAME: test.c                                                                    *
 *                                                                                 *
 * AUTHOR: Michael Brockus.                                                        *
 *                                                                                 *
 * CONTACT: <mailto:michael@squidfarts.com>                                        *
 *                                                                                 *
 * PURPOSE:                                                                        *
 *                                                                                 *
 * The majority of the file will be a series of test functions. Test functions     *
 * follow the convention of starting with the word "test_" or "spec_". You don't   *
 * HAVE to name them this way, but it makes it clear what functions are tests for  *
 * other developers.  Also, the automated scripts that come with Unity or Ceedling *
 * will default to looking for test functions to be prefixed this way. Test        *
 * functions take no arguments and return nothing. All test accounting is handled  *
 * internally in Unity.                                                            *
 *                                                                                 *
 * NOTICES:                                                                        *
 *                                                                                 *
 * License: MIT                                                                    *
 *                                                                                 *
 ***********************************************************************************/
#include <unity.h>
#include "operations.h"

/*
 *  Prototype functions for setup and teardown.
 */
void setUp(void)
{
    // TODO.
}//end of function setUp

void tearDown(void)
{
    // TODO.
}//end of function tearDown

/*
 *  Prototype test cases.
 */
void test_times(void);
void test_div(void);
void test_minus(void);
void test_plus(void);
void test_remander(void);


void test_plus(void)
{
    int x = 2, y = 2;
    TEST_ASSERT_EQUAL_INT(4, plus(&x, &y));
}//end of test case

void test_minus(void)
{
    int x = 2, y = 4;
    TEST_ASSERT_EQUAL_INT(2, minus(&x, &y));
}//end of test case

void test_div(void)
{
    int x = 5, y = 50;
    TEST_ASSERT_EQUAL_FLOAT(10.0, divide(&x, &y));
}//end of test case

void test_times(void)
{
    int x = 5, y = 10;
    TEST_ASSERT_EQUAL_INT(50, times(&x, &y));
}//end of test case

void test_remander(void)
{
    int x = 5, y = 10;
    TEST_ASSERT_EQUAL_FLOAT(0, remander(&x, &y));
}//end of test case
