/*
   Test 0092: Doubly Linked List
   Description: Nodes with prev and next.
   Focus: 3-pointer logic.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct DNode {
    int data;
    struct DNode *prev;
    struct DNode *next;
} DNode;

int main() {
    DNode *head = (DNode*)malloc(sizeof(DNode));
    DNode *tail = (DNode*)malloc(sizeof(DNode));
    
    head->data = 1;
    head->prev = NULL;
    head->next = tail;
    
    tail->data = 2;
    tail->prev = head;
    tail->next = NULL;
    
    printf("Forward: %d -> %d\n", head->data, head->next->data);
    printf("Backward: %d -> %d\n", tail->data, tail->prev->data);
    
    free(tail); free(head);
    return 0;
}
