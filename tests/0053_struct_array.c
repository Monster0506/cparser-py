/*
   Test 0053: Array of Structs
   Description: Storing multiple records.
   Focus: Iterating over struct arrays.
*/
#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point path[3] = {
        {0, 0},
        {10, 20},
        {50, 100}
    };
    
    for (int i = 0; i < 3; i++) {
        printf("Point %d: (%d, %d)\n", i, path[i].x, path[i].y);
    }
    
    return 0;
}
