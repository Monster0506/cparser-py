/*
   Test 0187: Branch Prediction
   Description: Hinting likely paths.
   Focus: __builtin_expect.
*/
#include <stdio.h>

#define likely(x)   __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)

int main() {
    int error = 0;
    
    if (unlikely(error)) {
        printf("Error happened.\n");
    } else {
        printf("All good.\n");
    }
    return 0;
}
