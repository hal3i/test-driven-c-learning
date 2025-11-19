#include "unity.h"

void test_AdditiveOperators(void)
{
    TEST_ASSERT_EQUAL(7, 5 + 2);
    TEST_ASSERT_EQUAL(3, 5 - 2);
}

void test_MultiplicativeOperators(void)
{
    TEST_ASSERT_EQUAL(6, 2 * 3);
    TEST_ASSERT_EQUAL(4, 8 / 2);
    TEST_ASSERT_EQUAL(1, 5 % 2);
}

void test_SizeOperator(void)
{
    TEST_ASSERT_EQUAL(1, sizeof(char));
    TEST_ASSERT_EQUAL(2, sizeof(short));
    TEST_ASSERT_EQUAL(4, sizeof(int));
    TEST_ASSERT_EQUAL(4, sizeof(long));
    TEST_ASSERT_EQUAL(8, sizeof(long long));
    TEST_ASSERT_EQUAL(4, sizeof(float));
    TEST_ASSERT_EQUAL(8, sizeof(double));
}

void test_ShiftOperators(void)
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

void test_RelationalOperators(void)
{
    TEST_ASSERT_TRUE(1 < 2);
    TEST_ASSERT_FALSE(1 < 1);

    TEST_ASSERT_TRUE(2 > 1);
    TEST_ASSERT_FALSE(1 > 1);

    TEST_ASSERT_TRUE(1 <= 2);
    TEST_ASSERT_TRUE(1 <= 1);

    TEST_ASSERT_TRUE(2 >= 1);
    TEST_ASSERT_TRUE(1 >= 1);

    TEST_ASSERT_TRUE(1 == 1);

    TEST_ASSERT_TRUE(1 != 2);
    TEST_ASSERT_FALSE(1 != 1);
}

void test_BitwiseOperators(void)
{
    TEST_ASSERT_EQUAL(0x0000, 0xFFFF & 0x0000);
    TEST_ASSERT_EQUAL(0xFFFF, 0xFFFF | 0x0000);
    TEST_ASSERT_EQUAL(0x0F0F, 0xFFFF ^ 0xF0F0);
}

void test_LogicalOperators(void)
{
    TEST_ASSERT_TRUE(1 == 1 && 2 == 2);
    TEST_ASSERT_FALSE(1 == 1 && 2 != 2);

    TEST_ASSERT_TRUE(1 == 1 || 2 != 2);
    TEST_ASSERT_FALSE(1 != 1 || 2 != 2);
}

void test_SequentialEvaluationOperator(void)
{
    int a = 1;
    int b = 2;
    int x = (a, b);     // x = a, x = b;

    TEST_ASSERT_EQUAL(2, x);
}
