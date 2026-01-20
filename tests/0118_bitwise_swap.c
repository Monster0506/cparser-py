/*
   Test 0118: Swap No Temp
   Description: Swapping using XOR.
   Focus: XOR trickery.
*/
#include <stdio.h>

int main() {
    int x = 10, y = 20;
    
    printf("Before: %d, %d\n", x, y);
    
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    
    printf("After: %d, %d\n", x, y);
    return 0;
}
