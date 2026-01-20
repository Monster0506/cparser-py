/*
   Test 0119: Count Set Bits
   Description: Counting 1s in binary representation.
   Focus: Brian Kernighan's Algorithm or loop.
*/
#include <stdio.h>

int count_bits(int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1); // Clears least significant bit set
        count++;
    }
    return count;
}

int main() {
    int v = 7; // 111
    printf("Set bits in %d: %d\n", v, count_bits(v));
    
    v = 11; // 1011
    printf("Set bits in %d: %d\n", v, count_bits(v));
    
    return 0;
}
