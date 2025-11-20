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
