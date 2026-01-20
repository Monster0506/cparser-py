/*
   Test 0100: Basic Macros
   Description: Defining constants and simple text replacement.
   Focus: #define.
*/
#include <stdio.h>

#define PI 3.14159
#define BUFFER_SIZE 1024
#define HELLO "Hello Macro"

int main() {
    printf("PI: %f\n", PI);
    printf("Buffer: %d\n", BUFFER_SIZE);
    printf("Msg: %s\n", HELLO);
    return 0;
}
