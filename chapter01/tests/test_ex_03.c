#include "unity.h"
#include "ex_03.h"

void setUp(void) {
}

void tearDown(void) {
}

void test_fahrenheit_celsius(void) {
    // Common cooking conversions
    TEST_ASSERT_FLOAT_WITHIN(0.5, 0, fahrenheit_celsius(32));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 66, fahrenheit_celsius(150));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 79, fahrenheit_celsius(175));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 93, fahrenheit_celsius(200));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 100, fahrenheit_celsius(212));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 107, fahrenheit_celsius(225));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 121, fahrenheit_celsius(250));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 135, fahrenheit_celsius(275));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 149, fahrenheit_celsius(300));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 163, fahrenheit_celsius(325));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 177, fahrenheit_celsius(350));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 191, fahrenheit_celsius(375));
    TEST_ASSERT_FLOAT_WITHIN(0.5, 204, fahrenheit_celsius(400));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_fahrenheit_celsius);
    return UNITY_END();
}
