/*
   Test 0089: Linked List Create
   Description: Basic node structure and manual linking.
   Focus: Struct with pointer to self-type.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* create_node(int data) {
    Node *n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->next = NULL;
    return n;
}

int main() {
    Node *head = create_node(1);
    head->next = create_node(2);
    
    printf("Head: %d, Next: %d\n", head->data, head->next->data);
    
    // Cleanup
    free(head->next);
    free(head);
    return 0;
}
