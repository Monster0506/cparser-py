/*
   Test 0174: Union Find
   Description: Disjoint Set Union (DSU).
   Focus: Find and Union array logic.
*/
#include <stdio.h>

int parent[10];

int find(int i) {
    if (parent[i] == i) return i;
    return find(parent[i]);
}

void unite(int i, int j) {
    int root_i = find(i);
    int root_j = find(j);
    if (root_i != root_j) {
        parent[root_i] = root_j;
    }
}

int main() {
    for(int i=0; i<10; i++) parent[i] = i;
    
    unite(1, 2);
    unite(2, 3);
    
    // 1 and 3 should share root
    printf("1 and 3 connected: %d\n", find(1) == find(3));
    return 0;
}
