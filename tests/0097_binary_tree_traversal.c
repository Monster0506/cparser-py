/*
   Test 0097: Tree Traversal
   Description: Recursive In-order traversal.
   Focus: Recursion on left, print, recursion on right.
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
    n->data = val; n->left = NULL; n->right = NULL;
    return n;
}

void inorder(Node *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    Node *root = create(2);
    root->left = create(1);
    root->right = create(3);
    
    printf("Inorder: ");
    inorder(root); // Should print 1 2 3
    printf("\n");
    
    return 0;
}
