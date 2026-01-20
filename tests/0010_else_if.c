/*
   Test 0010: Else-If Ladder
   Description: Multi-condition checking.
   Focus: else if chaining.
*/
#include <stdio.h>

int main() {
    int score = 75;
    
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
