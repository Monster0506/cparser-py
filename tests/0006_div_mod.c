/*
   Test 0006: Division and Modulo
   Description: Integer division vs float division and modulo.
   Focus: / operator, % operator, type casting.
*/
#include <stdio.h>

int main() {
    int total_seconds = 3665;
    int hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;

    printf("%d seconds is:\n", total_seconds);
    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
    
    // Float division demonstration
    float exact_hours = (float)total_seconds / 3600.0f;
    printf("Or exactly %.4f hours\n", exact_hours);

    return 0;
}
