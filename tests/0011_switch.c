/*
   Test 0011: Switch Statement
   Description: Switching on an integer value.
   Focus: switch, case, break, default.
*/
#include <stdio.h>

int main() {
    int day = 3;
    
    printf("Day %d is ", day);
    
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
        case 7:
            printf("Weekend");
            break;
        default:
            printf("Invalid day");
            break;
    }
    printf(".\n");

    return 0;
}
