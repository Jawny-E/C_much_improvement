#include "pyramid.h"

int pyramid_n(int n){
    n += 1; // Cheating :)
    int res = (n * (n+1)) / 2;
    return res;
}