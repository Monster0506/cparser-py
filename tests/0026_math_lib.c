/*
   Test 0026: Math Library
   Description: Using standard math functions.
   Focus: <math.h>, linking (conceptually).
*/
#include <stdio.h>
#include <math.h>

int main() {
    double num = 16.0;
    
    printf("Sqrt(%.2f) = %.2f\n", num, sqrt(num));
    printf("Pow(2, 3) = %.2f\n", pow(2.0, 3.0));
    printf("Ceil(2.3) = %.2f\n", ceil(2.3));
    printf("Floor(2.9) = %.2f\n", floor(2.9));

    return 0;
}
