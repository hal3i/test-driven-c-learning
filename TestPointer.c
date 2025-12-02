#include "unity.h"

void test_pointer(void)
{
    int a = 0;
    int *p = &a;

    TEST_ASSERT_EQUAL(0, a);
    TEST_ASSERT_EQUAL(0, *p);

    a = 1;

    TEST_ASSERT_EQUAL(1, a);
    TEST_ASSERT_EQUAL(1, *p);
}
