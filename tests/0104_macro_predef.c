/*
   Test 0104: Predefined Macros
   Description: Standard macros provided by compiler.
   Focus: __FILE__, __LINE__, __DATE__, __TIME__.
*/
#include <stdio.h>

void log_msg(const char *msg) {
    printf("[LOG] %s (File: %s, Line: %d)\n", msg, __FILE__, __LINE__);
}

int main() {
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);
    log_msg("Operation started");
    return 0;
}
