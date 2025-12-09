#include "unity.h"

int add(int a, int b) {
    return a + b;
}

int factorial(int num)
{
    if (num == 0) {
        return 1;
    }

    return num * factorial(num - 1);
}

void test_func_add(void)
{
    int x;

    x = add(1, 2);

    TEST_ASSERT_EQUAL(3, x);
}

void test_func_factorial(void)
{
    TEST_ASSERT_EQUAL(1, factorial(0));
    TEST_ASSERT_EQUAL(1, factorial(1));
    TEST_ASSERT_EQUAL(2, factorial(2));
    TEST_ASSERT_EQUAL(6, factorial(3));
    TEST_ASSERT_EQUAL(24, factorial(4));

    TEST_ASSERT_EQUAL(3628800, factorial(10));
    TEST_ASSERT_EQUAL(39916800, factorial(11));
    TEST_ASSERT_EQUAL(479001600, factorial(12));
    
    TEST_ASSERT_NOT_EQUAL(87178291200, factorial(13));  // !!
}

void test_function_pointer(void)
{
    int(*add_func)(int, int);
    
    add_func = add;

    int actual = add_func(1, 2);
    
    TEST_ASSERT_EQUAL(3, actual);
}
