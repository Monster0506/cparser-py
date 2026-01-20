/*
   Test 0199: Game of Life
   Description: Cellular automaton step.
   Focus: 2D grid processing.
*/
#include <stdio.h>

#define W 5
#define H 5

int count_neighbors(int grid[H][W], int r, int c) {
    int count = 0;
    for(int i=-1; i<=1; i++) {
        for(int j=-1; j<=1; j++) {
            if (i==0 && j==0) continue;
            int nr = r + i, nc = c + j;
            if (nr >= 0 && nr < H && nc >= 0 && nc < W) {
                count += grid[nr][nc];
            }
        }
    }
    return count;
}

int main() {
    int grid[H][W] = {
        {0,1,0,0,0},
        {0,0,1,0,0},
        {1,1,1,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };
    
    printf("Neighbors of (1,1): %d\n", count_neighbors(grid, 1, 1));
    return 0;
}
