/*
   Test 0087: String Duplication
   Description: Manually implementing strdup.
   Focus: malloc + strcpy.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strdup(const char* s) {
    size_t len = strlen(s) + 1; // +1 for null terminator
    char* new_str = (char*)malloc(len);
    if (new_str) {
        strcpy(new_str, s);
    }
    return new_str;
}

int main() {
    char *original = "Hello World";
    char *copy = my_strdup(original);
    
    printf("Copy: %s\n", copy);
    
    free(copy);
    return 0;
}
