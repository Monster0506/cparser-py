/*
   Test 0060: Enum Basics
   Description: Defining and using enumerations.
   Focus: enum declaration, assigning to variables.
*/
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    enum Color favorite = BLUE;
    
    printf("Enum value: %d\n", favorite);
    
    if (favorite == BLUE) {
        printf("Favorite color is Blue.\n");
    }
    
    return 0;
}
