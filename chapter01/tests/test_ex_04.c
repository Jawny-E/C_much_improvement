#include "unity.h"
#include "ex_04.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_results(void){
    TEST_ASSERT_FLOAT_WITHIN(0.5, 32, celsius_to_fahrenheit(0));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 122, celsius_to_fahrenheit(50));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 212, celsius_to_fahrenheit(100));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 302, celsius_to_fahrenheit(150));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 392, celsius_to_fahrenheit(200));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 482, celsius_to_fahrenheit(250));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 572, celsius_to_fahrenheit(300));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_results);
    return UNITY_END();
}
