/*
   Test 0129: Matrix Multiplication
   Description: Multiplying two 2D arrays.
   Focus: Triple nested loops.
*/
#include <stdio.h>

#define N 2

void multiply(int mat1[N][N], int mat2[N][N], int res[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res[i][j] = 0;
            for (int k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}

int main() {
    int m1[N][N] = { {1, 1}, {2, 2} };
    int m2[N][N] = { {1, 1}, {2, 2} };
    int res[N][N];
    
    multiply(m1, m2, res);
    
    printf("Result [0][0]: %d\n", res[0][0]); // 1*1 + 1*2 = 3
    return 0;
}
