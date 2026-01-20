/*
   Test 0144: String to Long
   Description: Robust integer parsing.
   Focus: strtol vs atoi.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *input = "12345abc";
    char *endptr;
    
    long val = strtol(input, &endptr, 10);
    
    printf("Val: %ld\n", val);
    printf("Stopped at: %s\n", endptr);
    return 0;
}
