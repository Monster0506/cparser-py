/*
   Test 0055: Typedef Struct
   Description: Aliasing struct types for cleaner code.
   Focus: typedef struct syntax.
*/
#include <stdio.h>

typedef struct {
    float x;
    float y;
} Vector2;

int main() {
    Vector2 v = {1.5f, 2.5f};
    printf("Vector: (%.1f, %.1f)\n", v.x, v.y);
    return 0;
}
