//Write a C program to perform Breadth First Search (BFS) on a graph using an adjacency matrix.
// CH.SC.U4CSE24142 - SANTHOSH A
#include <stdio.h>
int graph[10][10], visited[10];
int n;
void bfs(int start) {
    int queue[10], front = 0, rear = 0;
    queue[rear++] = start;
    visited[start] = 1;
    printf("BFS Traversal: ");
    while (front < rear) {
        int v = queue[front++];
        printf("%d ", v);
        for (int i = 0; i < n; i++) {
            if (graph[v][i] == 1 && visited[i] == 0) {
                queue[rear++] = i;
                visited[i] = 1;
            }
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
    bfs(start);
    return 0;
}