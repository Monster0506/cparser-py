/*
   Test 0110: Bitwise AND / OR
   Description: Basic bit manipulation.
   Focus: & and | operators.
*/
#include <stdio.h>

int main() {
    unsigned char a = 0x5; // 0101
    unsigned char b = 0x3; // 0011
    
    printf("AND: %d (Expected 1)\n", a & b); // 0001
    printf("OR:  %d (Expected 7)\n", a | b); // 0111
    
    return 0;
}
