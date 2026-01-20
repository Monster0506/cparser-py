/*
   Test 0094: Stack (Dynamic)
   Description: Stack using linked list (unlimited size).
   Focus: malloc on push, free on pop.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void push(Node **top, int val) {
    Node *n = (Node*)malloc(sizeof(Node));
    n->data = val;
    n->next = *top;
    *top = n;
}

int pop(Node **top) {
    if (*top == NULL) return -1;
    Node *temp = *top;
    int val = temp->data;
    *top = (*top)->next;
    free(temp);
    return val;
}

int main() {
    Node *stack = NULL;
    push(&stack, 100);
    push(&stack, 200);
    printf("Pop: %d\n", pop(&stack));
    printf("Pop: %d\n", pop(&stack));
    return 0;
}
