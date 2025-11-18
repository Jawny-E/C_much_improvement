#include "unity.h"
#include "fibonacci.h"

// Unity expects these hooks; provide empty implementations when not needed.
void setUp(void) {}
void tearDown(void) {}

void test_results_to_tenth(void){
    TEST_ASSERT_EQUAL_INT(1, fibonacci_n(0));
    TEST_ASSERT_EQUAL_INT(1, fibonacci_n(1));
    TEST_ASSERT_EQUAL_INT(2, fibonacci_n(2));
    TEST_ASSERT_EQUAL_INT(3, fibonacci_n(3));
    TEST_ASSERT_EQUAL_INT(5, fibonacci_n(4));
    TEST_ASSERT_EQUAL_INT(8, fibonacci_n(5));
    TEST_ASSERT_EQUAL_INT(13, fibonacci_n(6));
    TEST_ASSERT_EQUAL_INT(21, fibonacci_n(7));
    TEST_ASSERT_EQUAL_INT(34, fibonacci_n(8));
    TEST_ASSERT_EQUAL_INT(55, fibonacci_n(9));
    TEST_ASSERT_EQUAL_INT(89, fibonacci_n(10));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_results_to_tenth);
    return UNITY_END();
}