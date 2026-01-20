/*
   Test 0098: Generic List
   Description: Linked list holding void*.
   Focus: Generic data structures.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    void *data;
    struct Node *next;
} Node;

int main() {
    int a = 10;
    float b = 3.14;
    
    Node *n1 = (Node*)malloc(sizeof(Node));
    Node *n2 = (Node*)malloc(sizeof(Node));
    
    n1->data = &a;
    n1->next = n2;
    
    n2->data = &b;
    n2->next = NULL;
    
    printf("Node 1 (Int): %d\n", *(int*)(n1->data));
    printf("Node 2 (Float): %.2f\n", *(float*)(n2->data));
    
    free(n2); free(n1);
    return 0;
}
