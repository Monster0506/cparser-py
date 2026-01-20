/*
   Test 0077: Copy File (Character)
   Description: Implementing cp via fgetc/fputc.
   Focus: char-by-char I/O, feof.
*/
#include <stdio.h>

int main() {
    FILE *in = fopen("output.txt", "r");
    FILE *out = fopen("output_copy.txt", "w");
    
    if (in && out) {
        int ch;
        // Check for EOF implies reading int, not char
        while ((ch = fgetc(in)) != EOF) {
            fputc(ch, out);
        }
    }
    
    if (in) fclose(in);
    if (out) fclose(out);
    
    return 0;
}
