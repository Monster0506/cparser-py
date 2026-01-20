/*
   Test 0185: GCC Attributes
   Description: Function attributes.
   Focus: __attribute__.
*/
#include <stdio.h>

void __attribute__((deprecated)) old_func() {
    printf("Old.\n");
}

int main() {
    old_func(); // Should trigger warning
    return 0;
}
