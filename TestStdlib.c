#include <stdlib.h>
#include "unity.h"

void test_string_convertion(void)
{
    char str[] = "-1 -2 3 4 5.6 7.8 9.012";
    char *endptr;

    TEST_ASSERT_EQUAL(-1,    strtol("-1", NULL, 10));
    TEST_ASSERT_EQUAL(-2,    strtoll("-2", NULL, 10));
    TEST_ASSERT_EQUAL(3,     strtoul("3", NULL, 10));
    TEST_ASSERT_EQUAL(4,     strtoull("4", NULL, 10));
    TEST_ASSERT_EQUAL(5.6,   strtof("5.6", NULL));
    TEST_ASSERT_EQUAL(7.8,   strtod("7.8", NULL));
    TEST_ASSERT_EQUAL(9.012, strtold("9.012", NULL));
}

void test_abs(void)
{
    int a = abs(5);
    int b = abs(-3);

    TEST_ASSERT_EQUAL(5, a);
    TEST_ASSERT_EQUAL(3, b);
}
