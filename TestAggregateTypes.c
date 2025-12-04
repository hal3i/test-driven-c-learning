#include "unity.h"

void test_array_initialization(void)
{
    int x[3];
    x[0] = 0;
    x[1] = 1;
    x[2] = 2;

    TEST_ASSERT_EQUAL(0, x[0]);
    TEST_ASSERT_EQUAL(1, x[1]);
    TEST_ASSERT_EQUAL(2, x[2]);

    int y[] = { 0, 1, 2 };

    TEST_ASSERT_EQUAL(0, y[0]);
    TEST_ASSERT_EQUAL(1, y[1]);
    TEST_ASSERT_EQUAL(2, y[2]);
}
