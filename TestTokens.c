#include "unity.h"

void test_comment(void)
{
    /* コメント */

    /* 複数行に渡るコメント
    TEST_FAIL()
    */

    TEST_PASS();

#if 0
    /* ネストしたコメントは不可
    /* テスト */
    TEST_PASS();
    */
#endif
}
