/*
   Test 0023: Recursion (Factorial)
   Description: A function calling itself to solve a problem.
   Focus: Recursion, base case.
*/
#include <stdio.h>

unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 10;
    printf("%d! = %llu\n", n, factorial(n));
    return 0;
}
