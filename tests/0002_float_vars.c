/*
   Test 0002: Float Variables
   Description: Working with floating point numbers.
   Focus: float type, %f format specifier, precision.
*/
#include <stdio.h>

int main() {
    float pi = 3.14159;
    float radius = 2.5;
    float area;

    area = pi * radius * radius;

    printf("Radius: %.2f\n", radius);
    printf("Area: %f\n", area);
    
    return 0;
}
