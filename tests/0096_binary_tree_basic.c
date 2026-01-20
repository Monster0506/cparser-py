/*
   Test 0096: Binary Tree Node
   Description: Structure for a tree node.
   Focus: left/right pointers.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node* create(int val) {
    Node *n = (Node*)malloc(sizeof(Node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main() {
    Node *root = create(10);
    root->left = create(5);
    root->right = create(15);
    
    printf("Root: %d, Left: %d, Right: %d\n", 
           root->data, root->left->data, root->right->data);
           
    // Minimal cleanup
    free(root->left); free(root->right); free(root);
    return 0;
}
