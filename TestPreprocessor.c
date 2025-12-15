#include "unity.h"

#define APPLE  200
#define ORANGE 120
#define FRUITS_SET_A (APPLE + ORANGE)
#define FRUITS_SET_B  APPLE + ORANGE

void test_define_drective(void)
{
    int total_set_a = FRUITS_SET_A * 3;
    int total_set_b = FRUITS_SET_B * 3;

    TEST_ASSERT_EQUAL(960, total_set_a);
    TEST_ASSERT_EQUAL(560, total_set_b);
}

void test_if_directive(void)
{
#if 1
    TEST_PASS();
#elif 1
    TEST_FAIL();
#else
    TEST_FAIL();
#endif
    TEST_PASS();

#if 0
    TEST_FAIL();
#elif 1
    TEST_PASS();
#else
    TEST_FAIL();
#endif
    TEST_PASS();

#if 0
    TEST_FAIL();
#elif 0
    TEST_FAIL();
#else
    TEST_PASS();
#endif
    TEST_PASS();
}

void test_defined_undef_directive(void)
{
#define DEBUG
#if defined(DEBUG)
    TEST_PASS();
#else
    TEST_FAIL();
#endif

#undef DEBUG
#if defined(DEBUG)
    TEST_FAIL();
#else
    TEST_PASS();
#endif
}
