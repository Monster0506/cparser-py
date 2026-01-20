/*
   Test 0135: Setjmp Longjmp
   Description: Non-local jumps (exception simulation).
   Focus: <setjmp.h>.
*/
#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

void error_recovery() {
    printf("Error detected, jumping back.\n");
    longjmp(buf, 1);
}

int main() {
    if (setjmp(buf)) {
        printf("Returned from longjmp.\n");
    } else {
        printf("Executing normative code.\n");
        error_recovery();
    }
    return 0;
}
