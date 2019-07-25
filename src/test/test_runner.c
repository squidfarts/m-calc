/***********************************************************************************
 *                                                                                 *
 * NAME: test_runner.c                                                             *
 *                                                                                 *
 * AUTHOR: Michael Brockus.                                                        *
 *                                                                                 *
 * CONTACT: <mailto:michael@squidfarts.com>                                        *
 *                                                                                 *
 * PURPOSE:                                                                        *
 *                                                                                 *
 * In this file the `main()` function will call `UNITY_BEGIN()`, then `RUN_TEST`   *
 * for each test, and finally `UNITY_END()`.  This is what will actually trigger   *
 * each of those test functions to run, so it is important that each function      *
 * gets its own `RUN_TEST` call.                                                   *
 *                                                                                 *
 * NOTICES:                                                                        *
 *                                                                                 *
 * License: MIT                                                                    *
 *                                                                                 *
 ***********************************************************************************/
#include <unity.h>
#include "project.h"

/*
 *  Prototype functions for setup and teardown.
 */
extern void setUp(void);
extern void tearDown(void);

/*
 *  Prototype functions from the external test file.
 */
extern void test_times(void);
extern void test_div(void);
extern void test_minus(void);
extern void test_plus(void);
void test_remander(void);

/*
 *  This function runs test from the external test
 *  file.
 */
int main(void)
{
    UNITY_BEGIN();
    
    RUN_TEST(test_plus);
    RUN_TEST(test_minus);
    RUN_TEST(test_times);
    RUN_TEST(test_div);
    RUN_TEST(test_remander);
    
    return UNITY_END();
}//end of function main
