#include "Unity/unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_add_operator(void)
{
    TEST_ASSERT_EQUAL(7, 5 + 2);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add_operator);
    return UNITY_END();
}
