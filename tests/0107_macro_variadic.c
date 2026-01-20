/*
   Test 0107: Variadic Macros
   Description: Macros accepting variable args.
   Focus: __VA_ARGS__.
*/
#include <stdio.h>

#define LOG(fmt, ...) printf("DEBUG: " fmt "\n", __VA_ARGS__)

int main() {
    int val = 42;
    LOG("Value is %d", val);
    LOG("Values: %d, %d", val, val + 1);
    return 0;
}
