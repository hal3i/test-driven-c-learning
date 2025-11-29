#include "unity.h"

int add(int a, int b) {
    return a + b;
}

void test_func_add(void)
{
    int x;

    x = add(1, 2);

    TEST_ASSERT_EQUAL(3, x);
}
