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

void test_switch_statement(void)
{
    int actual = 0;
    char c = 'a';
    switch (c) {
        case 'a':
            actual = 1;
            break;
        case 'b':
            actual = 2;
            break;
        case 'c':
            actual = 3;
            break;
        default:
            actual = 4;
    }

    TEST_ASSERT_EQUAL(1, actual);

    int n = 2;
    switch (n) {
        case 0:
            actual++;
        case 1:
            actual++;
        case 2:
            actual++;
        case 3:
            actual++;
        case 4:
            actual++;
    }

    TEST_ASSERT_EQUAL(4, actual);

    n = 1;
    switch (n) {
        case 0:
            actual++;
            break;
        default:
            actual = -1;
    }

    TEST_ASSERT_EQUAL(-1, actual);
}

void test_do_while_statement(void)
{
    int i = 3;

    do {
        i = i - 1;
    } while (i > 0);

    TEST_ASSERT_EQUAL(0, i);
}

void test_break_statement(void)
{
    int i = 0;

    for (;;) {
        if (i++ == 5) {
            break;
        }
    }

    TEST_ASSERT_EQUAL(6, i);
}
