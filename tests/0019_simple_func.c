/*
   Test 0019: Simple Function
   Description: Defining and calling a helper function.
   Focus: basic function syntax, return values.
*/
#include <stdio.h>

// Function prototype
int add(int x, int y);
void greet();

int main() {
    greet();
    int sum = add(10, 20);
    printf("10 + 20 = %d\n", sum);
    return 0;
}

// Function definitions
int add(int x, int y) {
    return x + y;
}

void greet() {
    printf("Welcome to the calculator!\n");
}
