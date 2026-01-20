/*
   Test 0009: Nested If-Else
   Description: Determining multiple states using nesting.
   Focus: Nested boolean logic.
*/
#include <stdio.h>

int main() {
    int age = 20;
    int has_id = 1; // boolean true

    if (age >= 18) {
        printf("Age check passed.\n");
        if (has_id) {
            printf("Access granted.\n");
        } else {
            printf("Access denied: No ID.\n");
        }
    } else {
        printf("Access denied: Underage.\n");
    }

    return 0;
}
