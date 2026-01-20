/*
   Test 0114: Clear Bit
   Description: Setting a specific bit to 0.
   Focus: AND with inverted mask.
*/
#include <stdio.h>

int main() {
    unsigned char flags = 0xFF; // 11111111
    
    // Clear bit 2
    flags &= ~(1 << 2);
    
    // Clear bit 7
    flags &= ~(1 << 7);
    
    printf("Flags: %d (0x%X)\n", flags, flags);
    return 0;
}
