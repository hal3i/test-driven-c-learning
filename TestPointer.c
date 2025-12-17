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
