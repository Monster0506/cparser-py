/*
   Test 0153: Ungetc
   Description: Pushing character back to stream.
   Focus: ungetc.
*/
#include <stdio.h>

int main() {
    // Simulated input stream
    FILE *f = fopen("test.txt", "w+");
    fputc('A', f);
    rewind(f);
    
    int c = fgetc(f);
    printf("Read: %c\n", c);
    
    ungetc(c, f); // Push back
    
    int d = fgetc(f);
    printf("Read again: %c\n", d);
    
    fclose(f);
    remove("test.txt");
    return 0;
}
