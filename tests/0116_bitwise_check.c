/*
   Test 0116: Check Bit
   Description: Determining if a bit is set.
   Focus: AND with mask check.
*/
#include <stdio.h>

int is_bit_set(int n, int k) {
    return (n & (1 << k)) != 0;
}

int main() {
    int val = 0x4; // 0100 (Bit 2 set)
    
    if (is_bit_set(val, 2)) {
        printf("Bit 2 is set.\n");
    }
    
    if (!is_bit_set(val, 0)) {
        printf("Bit 0 is not set.\n");
    }
    
    return 0;
}
