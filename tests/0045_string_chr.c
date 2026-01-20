/*
   Test 0045: Character Search
   Description: Finding a character within a string.
   Focus: strchr returning pointer.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char email[] = "user@example.com";
    char *at_symbol = strchr(email, '@');
    
    if (at_symbol) {
        printf("Found '@' at index: %ld\n", at_symbol - email);
        printf("Domain part: %s\n", at_symbol + 1);
    } else {
        printf("Invalid email format.\n");
    }
    
    return 0;
}
