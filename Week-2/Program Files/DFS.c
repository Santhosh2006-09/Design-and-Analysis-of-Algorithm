// Write a C program to perform Depth First Search (DFS) on a graph using an adjacency matrix.
// CH.SC.U4CSE24142 - SANTHOSH A
#include <stdio.h>
int graph[10][10], visited[10];
int n;
void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && visited[i] == 0) {
            dfs(i);
        }
    }
}
int main() {
    printf("CH.SC.U4CSE24142 - SANTHOSH A\n");
    int start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    printf("Enter starting vertex: ");
    scanf("%d", &start);
    printf("DFS Traversal: ");
    dfs(start);
    return 0;
}