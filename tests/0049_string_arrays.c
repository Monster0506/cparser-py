/*
   Test 0049: Array of Strings
   Description: Managing multiple strings.
   Focus: char* array vs 2D char array.
*/
#include <stdio.h>

int main() {
    // Array of pointers (often read-only literals)
    const char *colors[] = {
        "Red",
        "Green",
        "Blue"
    };
    
    // 2D Array (mutable memory)
    char items[3][10] = {
        "Sword",
        "Shield",
        "Potion"
    };
    
    printf("First color: %s\n", colors[0]);
    
    items[2][0] = 'L'; // Change Potion to Lotion
    printf("Modified item: %s\n", items[2]);
    
    return 0;
}
