/*
   Test 0113: Set Bit
   Description: Setting a specific bit to 1.
   Focus: OR with mask.
*/
#include <stdio.h>

void print_bits(unsigned char n) {
    for(int i=7; i>=0; i--) printf("%d", (n >> i) & 1);
    printf("\n");
}

int main() {
    unsigned char flags = 0; // 00000000
    
    // Set bit 3 (4th bit)
    flags |= (1 << 3);
    
    // Set bit 0
    flags |= (1 << 0);
    
    printf("Flags: ");
    print_bits(flags); // 00001001
    
    return 0;
}
