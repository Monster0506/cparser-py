/*
   Test 0099: Jagged Array
   Description: Array of arrays with different row lengths.
   Focus: Individual row allocation control.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3;
    int *table[3]; // Array of pointers
    
    // Allocate rows with different sizes
    table[0] = (int*)malloc(2 * sizeof(int)); // Row 0: size 2
    table[1] = (int*)malloc(4 * sizeof(int)); // Row 1: size 4
    table[2] = (int*)malloc(1 * sizeof(int)); // Row 2: size 1
    
    table[0][1] = 9;
    table[1][3] = 99;
    
    printf("Ragged val: %d, %d\n", table[0][1], table[1][3]);
    
    for(int i=0; i<3; i++) free(table[i]);
    return 0;
}
