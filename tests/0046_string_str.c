/*
   Test 0046: Substring Search
   Description: Finding a string within a string.
   Focus: strstr.
*/
#include <stdio.h>
#include <string.h>

int main() {
    const char *haystack = "The quick brown fox jumps";
    const char *needle = "brown";
    
    char *result = strstr(haystack, needle);
    
    if (result) {
        printf("Found sub-string: '%s'\n", result);
    } else {
        printf("Not found.\n");
    }
    
    return 0;
}
