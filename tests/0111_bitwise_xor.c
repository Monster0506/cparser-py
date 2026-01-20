/*
   Test 0111: Bitwise XOR / NOT
   Description: XOR and Ones Complement.
   Focus: ^ and ~ operators.
*/
#include <stdio.h>

int main() {
    unsigned char a = 0x5; // 0101
    unsigned char b = 0x3; // 0011
    
    printf("XOR: %d (Expected 6)\n", a ^ b); // 0110
    printf("NOT: %d\n", (unsigned char)~a); // 11111010 -> 250
    
    return 0;
}
