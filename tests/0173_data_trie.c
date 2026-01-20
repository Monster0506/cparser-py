/*
   Test 0173: Trie Insert
   Description: Prefix tree structure.
   Focus: Array of pointers per node.
*/
#include <stdio.h>
#include <stdlib.h>

#define ALPHA 26

typedef struct TrieNode {
    struct TrieNode *children[ALPHA];
    int is_end;
} TrieNode;

TrieNode* create() {
    TrieNode *n = (TrieNode*)calloc(1, sizeof(TrieNode));
    return n;
}

void insert(TrieNode *root, char *key) {
    TrieNode *curr = root;
    for(int i=0; key[i]; i++) {
        int idx = key[i] - 'a';
        if (!curr->children[idx])
            curr->children[idx] = create();
        curr = curr->children[idx];
    }
    curr->is_end = 1;
}

int main() {
    TrieNode *root = create();
    insert(root, "apple");
    insert(root, "app");
    
    printf("Inserted apple and app.\n");
    return 0;
}
