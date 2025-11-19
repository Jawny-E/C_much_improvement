#include "unity.h"
#include "ex_01.h"

// Unity expects these hooks; provide empty implementations when not needed.
void setUp(void) {}
void tearDown(void) {}

void test_output(void){
    // Note this is stupidly written by AI, just to have A test.
    // Hope I can write this myself after this project is over :>

    // Redirect stdout to a temporary file
    FILE *tmp = tmpfile();
    TEST_ASSERT_NOT_NULL(tmp);
    
    // Save old stdout
    FILE *old_stdout = stdout;
    stdout = tmp;

    // Call the function that prints
    hello_world();

    // Restore stdout
    fflush(tmp);
    stdout = old_stdout;

    // Read captured output
    fseek(tmp, 0, SEEK_SET);
    char buffer[64] = {0};
    fread(buffer, 1, sizeof(buffer) - 1, tmp);

    // Validate printed output
    TEST_ASSERT_EQUAL_STRING("Hello World!\n", buffer);
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_output);
    return UNITY_END();
}
