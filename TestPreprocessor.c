#include "unity.h"

#define APPLE  200
#define ORANGE 120
#define FRUITS_SET_A (APPLE + ORANGE)
#define FRUITS_SET_B  APPLE + ORANGE

void test_define_drective(void)
{
    int total_set_a = FRUITS_SET_A * 3;
    int total_set_b = FRUITS_SET_B * 3;

    TEST_ASSERT_EQUAL(960, total_set_a);
    TEST_ASSERT_EQUAL(560, total_set_b);
}
