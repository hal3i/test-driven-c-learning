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

void test_size_operator()
{
    TEST_ASSERT_EQUAL(1, sizeof(char));
    TEST_ASSERT_EQUAL(2, sizeof(short));
    TEST_ASSERT_EQUAL(4, sizeof(int));
    TEST_ASSERT_EQUAL(4, sizeof(long));
    TEST_ASSERT_EQUAL(8, sizeof(long long));
    TEST_ASSERT_EQUAL(4, sizeof(float));
    TEST_ASSERT_EQUAL(8, sizeof(double));
}

void test_shift_operators()
{
    TEST_ASSERT_EQUAL(0x02, 0x01 << 1);
    TEST_ASSERT_EQUAL(0x04, 0x01 << 2);
    TEST_ASSERT_EQUAL(0x08, 0x01 << 3);
    TEST_ASSERT_EQUAL(0x10, 0x01 << 4);
    TEST_ASSERT_EQUAL(0x08, 0x10 >> 1);
    TEST_ASSERT_EQUAL(0x04, 0x10 >> 2);
    TEST_ASSERT_EQUAL(0x02, 0x10 >> 3);
    TEST_ASSERT_EQUAL(0x01, 0x10 >> 4);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add_operator);
    RUN_TEST(test_sub_operator);
    RUN_TEST(test_mul_operator);
    RUN_TEST(test_div_operator);
    RUN_TEST(test_data_type_size);
    RUN_TEST(test_shift_operators);
    return UNITY_END();
}
