#include "ex_03.h"

float fahrenheit_celsius(float fahrenheit){
    float celsius;
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    return celsius;
}

void print_loop(int lower, int upper, int step){
    float result;
    // Headlines
    printf("\033[4m   Conversion Table   \033[0m\n");
    printf("Fahrenheit  |  Celsius\n");
    // Loop through values 
    while(lower <= upper){
        result = fahrenheit_celsius(lower);
        printf("%10i  |  %7.1f\n", lower, result);
        lower = lower + step;
    }
}
