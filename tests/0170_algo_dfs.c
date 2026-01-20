/*
   Test 0170: Graph DFS
   Description: Depth First Search.
   Focus: Recursion on visited array.
*/
#include <stdio.h>

void dfs(int graph[4][4], int node, int visited[]) {
    visited[node] = 1;
    printf("%d ", node);
    
    for(int i=0; i<4; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs(graph, i, visited);
        }
    }
}

int main() {
    int g[4][4] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };
    int visited[4] = {0};
    
    printf("DFS: ");
    dfs(g, 0, visited);
    return 0;
}
