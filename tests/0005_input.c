/*
   Test 0005: User Input (scanf)
   Description: Reading values from stdin.
   Focus: scanf, address-of operator &.
*/
#include <stdio.h>

int main() {
    int user_age;
    
    // Simulate input for non-interactive testing, 
    // but code structure is for input.
    // In a real run, user types number.
    printf("Enter your age: ");
    
    // NOTE: In automated testing this might block if no input pipe provided.
    // user_age = 25; 
    // But adhering to C syntax for proper parsing tests:
    if (scanf("%d", &user_age) == 1) {
        printf("You are %d years old.\n", user_age);
    } else {
        printf("Failed to read age.\n");
    }

    return 0;
}
