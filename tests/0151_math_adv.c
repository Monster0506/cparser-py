/*
   Test 0151: Advanced Math
   Description: Log, Exp, Sqrt.
   Focus: math.h.
*/
#include <stdio.h>
#include <math.h>

int main() {
    printf("exp(1): %.4f\n", exp(1.0));
    printf("log(2.718): %.4f\n", log(2.718));
    printf("log10(100): %.2f\n", log10(100.0));
    return 0;
}
