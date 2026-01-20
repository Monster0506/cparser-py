/*
   Test 0073: File Append
   Description: Adding to end of file clearly.
   Focus: "a" mode.
*/
#include <stdio.h>

int main() {
    FILE *f = fopen("output.txt", "a");
    if (!f) return 1;
    
    fprintf(f, "Appended line.\n");
    
    fclose(f);
    return 0;
}
