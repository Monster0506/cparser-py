/*
   Test 0112: Bit Shifting
   Description: Left and Right shifts.
   Focus: << and >> operators.
*/
#include <stdio.h>

int main() {
    int val = 5; // 0000 0101
    
    int left = val << 2; // 0001 0100 (20)
    int right = val >> 1; // 0000 0010 (2)
    
    printf("Original: %d\n", val);
    printf("Left << 2: %d\n", left);
    printf("Right >> 1: %d\n", right);
    
    return 0;
}
