/*
   Test 0115: Toggle Bit
   Description: Flipping a bit value.
   Focus: XOR with mask.
*/
#include <stdio.h>

int main() {
    unsigned char val = 0x0F; // 00001111
    
    // Toggle bit 0 (1->0)
    val ^= (1 << 0);
    
    // Toggle bit 4 (0->1)
    val ^= (1 << 4);
    
    printf("Val: 0x%X\n", val); // Expect 00011110 (1E)
    return 0;
}
