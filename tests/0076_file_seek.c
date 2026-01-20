/*
   Test 0076: File Seek
   Description: Moving cursor in file.
   Focus: fseek, SEEK_SET.
*/
#include <stdio.h>

int main() {
    FILE *f = fopen("data.bin", "rb");
    if (!f) return 1;
    
    // Seek to 0 bytes from beginning (redundant here, but demo)
    fseek(f, 0, SEEK_SET);
    
    // Check current position
    long pos = ftell(f);
    printf("Position: %ld\n", pos);
    
    fclose(f);
    return 0;
}
