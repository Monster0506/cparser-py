/*
   Test 0169: Graph Matrix
   Description: Adjacency Matrix representation.
   Focus: 2D array graph.
*/
#include <stdio.h>

#define V 4

void add_edge(int adj[V][V], int i, int j) {
    adj[i][j] = 1;
    adj[j][i] = 1; // Undirected
}

int main() {
    int adj[V][V] = {0};
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    
    printf("0 is connected to 1: %d\n", adj[0][1]);
    return 0;
}
