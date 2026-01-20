/*
   Test 0018: Array Traversal
   Description: Iterating over an array to compute stats.
   Focus: Arrays + Loops.
*/
#include <stdio.h>

int main() {
    int scores[] = {85, 92, 78, 90, 88};
    int count = 5;
    int sum = 0;
    int max = 0;

    for (int i = 0; i < count; i++) {
        sum += scores[i];
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    
    printf("Average Score: %d\n", sum / count);
    printf("Highest Score: %d\n", max);

    return 0;
}
