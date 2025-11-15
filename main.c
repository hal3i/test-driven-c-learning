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

void test_sub_operator(void)
{
    TEST_ASSERT_EQUAL(3, 5 - 2);
}

void test_mul_operator()
{
    TEST_ASSERT_EQUAL(6, 2 * 3);
}

void test_div_operator()
{
    TEST_ASSERT_EQUAL(4, 8 / 2);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add_operator);
    RUN_TEST(test_sub_operator);
    RUN_TEST(test_mul_operator);
    RUN_TEST(test_div_operator);
    return UNITY_END();
}
