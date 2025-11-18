#include "fibonacci.h"

/*
    Note to self, you can trim it down to two variables
    if you handle the case of n=0 as separate
*/
int fibonacci_n(int n){
    int f_2 = 0;
    int f_1 = 0;
    int f = 1;

    for(int step = 0; step < n; step++){
        f_2 = f_1;
        f_1 = f;
        f = f_1 + f_2;
    }
    return f;
}
