/*
   Test 0001: Integer Variables
   Description: Declaring and initializing integer variables.
   Focus: int type, format specifiers.
*/
#include <stdio.h>

int main() {
    int apples = 5;
    int oranges = 10;
    int total_fruit;

    // Assignment
    total_fruit = apples + oranges;

    printf("Apples: %d\n", apples);
    printf("Oranges: %d\n", oranges);
    printf("Total Fruit: %d\n", total_fruit);

    return 0;
}
