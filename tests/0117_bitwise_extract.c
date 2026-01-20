/*
   Test 0117: Extract Bits
   Description: Getting specific bits field from integer.
   Focus: Masking after shifting.
*/
#include <stdio.h>

int main() {
    // Value: 1011 0011 1000 1111
    // We want middle nibble at bits 4-7: "1000" (8)
    unsigned short val = 0xB38F;
    
    unsigned short extracted = (val >> 4) & 0xF;
    
    printf("Extracted: %d (0x%X)\n", extracted, extracted);
    return 0;
}
