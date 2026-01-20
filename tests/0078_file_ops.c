/*
   Test 0078: Remove and Rename
   Description: File system operations.
   Focus: remove, rename functions.
*/
#include <stdio.h>

int main() {
    // Warning: Destructive
    FILE *f = fopen("temp_junk.txt", "w");
    if (f) fclose(f);
    
    if (rename("temp_junk.txt", "temp_moved.txt") == 0) {
        printf("Renamed.\n");
    }
    
    if (remove("temp_moved.txt") == 0) {
        printf("Deleted.\n");
    }
    
    return 0;
}
