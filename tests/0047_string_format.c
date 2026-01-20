/*
   Test 0047: String Formatting
   Description: Printing formatted data into a string buffer.
   Focus: sprintf.
*/
#include <stdio.h>

int main() {
    char buffer[100];
    int id = 42;
    float score = 98.5;
    
    // "Print" to string instead of console
    sprintf(buffer, "Player %d has score %.1f", id, score);
    
    printf("Formatted string: [%s]\n", buffer);
    
    return 0;
}
