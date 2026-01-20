/*
   Test 0025: Pass by Value
   Description: demonstrating that changes in functions don't affect caller.
   Focus: Value semantics.
*/
#include <stdio.h>

void try_to_change(int x) {
    x = 1000;
    printf("Inside function: x = %d\n", x);
}

int main() {
    int a = 5;
    printf("Before: a = %d\n", a);
    try_to_change(a);
    printf("After: a = %d (Unchanged)\n", a);
    return 0;
}
