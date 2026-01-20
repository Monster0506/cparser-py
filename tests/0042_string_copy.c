/*
   Test 0042: String Copy
   Description: Copying strings using strcpy and strncpy.
   Focus: Buffer overflow safety.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Source content";
    char dest1[20];
    char dest2[5];
    
    strcpy(dest1, src);
    printf("strcpy result: %s\n", dest1);
    
    // Safer copy (prevents overflow, but might not null-terminate if truncated)
    strncpy(dest2, src, sizeof(dest2) - 1);
    dest2[sizeof(dest2) - 1] = '\0'; // Ensure termination
    printf("strncpy result: %s\n", dest2);
    
    return 0;
}
