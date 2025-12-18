#include "unity.h"

void test_pointer(void)
{
    int a = 0;
    int *p = &a;

    TEST_ASSERT_EQUAL(0, a);
    TEST_ASSERT_EQUAL(0, *p);

    a = 1;

    TEST_ASSERT_EQUAL(1, a);
    TEST_ASSERT_EQUAL(1, *p);
}

void test_pointer_and_array(void)
{
    int x[3] = { 0, 1, 2 };

    TEST_ASSERT_EQUAL(0, x[0]);
    TEST_ASSERT_EQUAL(1, x[1]);
    TEST_ASSERT_EQUAL(2, x[2]);
    
    TEST_ASSERT_EQUAL(0, *x);
    TEST_ASSERT_EQUAL(1, *(x + 1));
    TEST_ASSERT_EQUAL(2, *(x + 2));

    int *px = x;

    TEST_ASSERT_EQUAL(0, px[0]);
    TEST_ASSERT_EQUAL(1, px[1]);
    TEST_ASSERT_EQUAL(2, px[2]);

    TEST_ASSERT_EQUAL(0, *px);
    TEST_ASSERT_EQUAL(1, *(px + 1));
    TEST_ASSERT_EQUAL(2, *(px + 2));
}

void test_convertion_int_to_char_pointer(void)
{
    int x = 0x12345678;
    char *p = (char*)&x;

    TEST_ASSERT_EQUAL(0x78, *p);
    TEST_ASSERT_EQUAL(0x56, *(p + 1));
    TEST_ASSERT_EQUAL(0x34, *(p + 2));
    TEST_ASSERT_EQUAL(0x12, *(p + 3));
}

void test_convertion_char_to_int_pointer(void)
{
    char a[8] = { 0x67, 0x45, 0x23, 0x01, 0xEF, 0xCD, 0xAB, 0x89 };
    unsigned int *p = (unsigned int*)&a;

    TEST_ASSERT_EQUAL(0x01234567, *p);
    TEST_ASSERT_EQUAL(0x89ABCDEF, *(p + 1));
}
