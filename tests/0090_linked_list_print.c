/*
   Test 0090: Linked List Traversal
   Description: Iterating through a list.
   Focus: while(current != NULL).
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main() {
    // Setup 1 -> 2 -> 3 manually
    Node *head = (Node*)malloc(sizeof(Node));
    Node *second = (Node*)malloc(sizeof(Node));
    Node *third = (Node*)malloc(sizeof(Node));
    
    head->data = 1; head->next = second;
    second->data = 2; second->next = third;
    third->data = 3; third->next = NULL;
    
    // Traverse
    Node *current = head;
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    
    // Cleanup
    free(third); free(second); free(head);
    return 0;
}
