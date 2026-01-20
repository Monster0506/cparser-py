/*
   Test 0024: Recursion (Fibonacci)
   Description: Generating Fibonacci sequence recursively.
   Focus: Multiple recursive calls per step.
*/
#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n = 10;
    printf("Fibonacci sequence up to %d:\n", n);
    for(int i=0; i<n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}
