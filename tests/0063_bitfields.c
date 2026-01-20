/*
   Test 0063: Bitfields
   Description: Packing booleans/small ints into struct.
   Focus: : n syntax for bit width.
*/
#include <stdio.h>

struct Flags {
    unsigned int is_visible : 1;
    unsigned int is_admin : 1;
    unsigned int level : 4; // 0-15
};

int main() {
    struct Flags f;
    f.is_visible = 1;
    f.is_admin = 0;
    f.level = 10;
    
    printf("Visible: %d\n", f.is_visible);
    printf("Level: %d\n", f.level);
    
    // Overflow the 4 bits
    f.level = 20; // Binary 10100 -> truncates to 0100 (4)
    printf("Level (overflow attempt): %d\n", f.level);
    
    return 0;
}
