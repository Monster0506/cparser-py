/*
   Test 0027: Character Functions
   Description: Using ctype.h to check/convert chars.
   Focus: <ctype.h>
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'a';
    
    if (islower(c)) {
        printf("%c is lowercase. Uppercase: %c\n", c, toupper(c));
    }
    
    char d = '9';
    if (isdigit(d)) {
        printf("%c is a digit.\n", d);
    }
    
    return 0;
}
