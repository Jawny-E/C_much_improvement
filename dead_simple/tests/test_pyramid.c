#include "unity.h"
#include "pyramid.h"

// Unity expects these hooks; provide empty implementations when not needed.
void setUp(void) {}
void tearDown(void) {}

void test_results_pyramid(void){
    TEST_ASSERT_EQUAL_INT(1, pyramid_n(0));
    TEST_ASSERT_EQUAL_INT(3, pyramid_n(1));
    TEST_ASSERT_EQUAL_INT(6, pyramid_n(2));
    TEST_ASSERT_EQUAL_INT(10, pyramid_n(3));
    TEST_ASSERT_EQUAL_INT(15, pyramid_n(4));
    TEST_ASSERT_EQUAL_INT(21, pyramid_n(5));
    TEST_ASSERT_EQUAL_INT(28, pyramid_n(6));
    TEST_ASSERT_EQUAL_INT(36, pyramid_n(7));
    TEST_ASSERT_EQUAL_INT(45, pyramid_n(8));
    TEST_ASSERT_EQUAL_INT(55, pyramid_n(9));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_results_pyramid);
    return UNITY_END();
}