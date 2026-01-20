/*
   Test 0152: Stream Buffering
   Description: Controlling stdio buffer.
   Focus: setvbuf.
*/
#include <stdio.h>

int main() {
    // Disable buffering for stdout
    setvbuf(stdout, NULL, _IONBF, 0);
    
    printf("Immediate output");
    // No newline needed to flush
    
    return 0;
}
