/*
   Test 0084: Struct Allocation
   Description: Dynamically allocating structs.
   Focus: malloc(sizeof(Struct)).
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float score;
} Player;

int main() {
    Player *p = (Player*)malloc(sizeof(Player));
    
    p->id = 7;
    p->score = 99.9;
    
    printf("ID: %d, Score: %.1f\n", p->id, p->score);
    
    free(p);
    return 0;
}
