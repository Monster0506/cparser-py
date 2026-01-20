/*
   Test 0156: Env Vars
   Description: Reading environment variables.
   Focus: getenv.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *path = getenv("PATH");
    if (path) {
        printf("PATH found (first 20 chars): %.20s...\n", path);
    } else {
        printf("PATH not found.\n");
    }
    return 0;
}
