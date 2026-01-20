/*
   Test 0003: Char Variables
   Description: Single character manipulation.
   Focus: char type, %c specifier, ASCII values.
*/
#include <stdio.h>

int main() {
    char grade = 'A';
    char nice_grade = grade + 1; // 'B'

    printf("Original Grade: %c\n", grade);
    printf("Next Grade: %c\n", nice_grade);
    printf("ASCII value of %c is %d\n", grade, (int)grade);

    return 0;
}
