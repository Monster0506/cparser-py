/*
   Test 0065: Array of Function Pointers
   Description: Dispatch tables.
   Focus: calling function from array.
*/
#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int main() {
    int (*ops[3])(int, int) = {add, sub, mul};
    
    int a = 10, b = 5;
    
    printf("Add: %d\n", ops[0](a, b));
    printf("Sub: %d\n", ops[1](a, b));
    printf("Mul: %d\n", ops[2](a, b));
    
    return 0;
}
