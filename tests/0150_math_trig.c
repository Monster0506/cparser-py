/*
   Test 0150: Trigonometry
   Description: Sin, Cos, Tan.
   Focus: math.h.
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double angle = 45.0;
    double rad = angle * PI / 180.0;
    
    printf("Sin(45): %.2f\n", sin(rad));
    printf("Cos(45): %.2f\n", cos(rad));
    return 0;
}
