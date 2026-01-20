/*
   Test 0041: String Length
   Description: Calculating string length using strlen.
   Focus: strlen, null terminator.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "C Programming";
    
    // Using standard library
    printf("Length of '%s' is %zu\n", text, strlen(text));
    
    // Manual calculation
    int count = 0;
    while(text[count] != '\0') {
        count++;
    }
    printf("Manual count: %d\n", count);
    
    return 0;
}
