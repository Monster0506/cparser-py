/*
   Test 0140: Complex Numbers (C99)
   Description: Native complex number support.
   Focus: <complex.h>.
*/
#include <stdio.h>
#include <complex.h>

int main() {
    double complex z1 = 1.0 + 2.0 * I;
    double complex z2 = 1.0 - 2.0 * I;
    
    double complex prod = z1 * z2;
    
    printf("Product real: %.2f\n", creal(prod));
    printf("Product imag: %.2f\n", cimag(prod));
    return 0;
}
