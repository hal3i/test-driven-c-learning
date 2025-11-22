#include "unity.h"

void test_if_Statement(void)
{
    int i = 0;

    if (i == 0) {
        TEST_PASS();
    }
    else {
        TEST_FAIL();
    }

    if (i != 0) {
        TEST_FAIL();
    }
    else {
        TEST_PASS();
    }
}

void test_for_statement(void)
{
    int expected = 1 + 2 + 3;
    int actual = 0;
    int i;

    for (i = 1; i < 4; i++)
    {
        actual += i;
    }

    TEST_ASSERT_EQUAL(4, i);
    TEST_ASSERT_EQUAL(expected, actual);
}
