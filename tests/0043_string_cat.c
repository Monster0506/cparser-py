/*
   Test 0043: String Concatenation
   Description: Joining strings.
   Focus: strcat, buffer size awareness.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[50] = "Hello";
    
    strcat(buffer, ", ");
    strcat(buffer, "World!");
    
    printf("Concatenated: %s\n", buffer);
    
    return 0;
}
