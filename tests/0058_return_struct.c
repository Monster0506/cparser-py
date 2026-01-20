/*
   Test 0058: Returning Structs
   Description: Functions returning struct values.
   Focus: struct return types.
*/
#include <stdio.h>

typedef struct {
    int min, max;
} Range;

Range make_range(int a, int b) {
    Range r;
    if (a < b) {
        r.min = a; r.max = b;
    } else {
        r.min = b; r.max = a;
    }
    return r;
}

int main() {
    Range r = make_range(100, 50);
    printf("Range: [%d, %d]\n", r.min, r.max);
    return 0;
}
