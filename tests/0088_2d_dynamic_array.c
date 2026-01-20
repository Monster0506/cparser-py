/*
   Test 0088: 2D Dynamic Array
   Description: Allocating a matrix (array of arrays).
   Focus: **ptr loop allocation.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 4;
    
    // Allocate array of int pointers
    int **matrix = (int**)malloc(rows * sizeof(int*));
    
    // Allocate each row
    for(int i=0; i<rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    
    // Use
    matrix[1][2] = 99;
    printf("Matrix[1][2] = %d\n", matrix[1][2]);
    
    // Free (reverse order)
    for(int i=0; i<rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    
    return 0;
}
