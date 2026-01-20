/*
   Test 0070: File Write (Basic)
   Description: Creating and writing to a text file.
   Focus: fopen, fprintf, fclose.
*/
#include <stdio.h>

int main() {
    FILE *f = fopen("output.txt", "w");
    if (f == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(f, "Hello File!\n");
    fprintf(f, "Value: %d\n", 42);
    
    fclose(f);
    printf("File written.\n");
    return 0;
}
