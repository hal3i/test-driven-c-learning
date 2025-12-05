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

void test_2d_array_initialization(void)
{
    int A[2][3];
    A[0][0] = 0;
    A[0][1] = 1;
    A[0][2] = 2;
    A[1][0] = 10;
    A[1][1] = 11;
    A[1][2] = 12;

    int B[2][3] = { 0, 1, 2, 10, 11, 12 };

    TEST_ASSERT_EQUAL(A[0][0], B[0][0]);
    TEST_ASSERT_EQUAL(A[0][1], B[0][1]);
    TEST_ASSERT_EQUAL(A[0][2], B[0][2]);
    TEST_ASSERT_EQUAL(A[1][0], B[1][0]);
    TEST_ASSERT_EQUAL(A[1][1], B[1][1]);
    TEST_ASSERT_EQUAL(A[1][2], B[1][2]);
}
