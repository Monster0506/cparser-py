/*
   Test 0155: System Command
   Description: Executing shell command.
   Focus: system().
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Running dir/ls...\n");
#ifdef _WIN32
    system("dir /b");
#else
    system("ls");
#endif
    return 0;
}
