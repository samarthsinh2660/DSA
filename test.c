#include <stdio.h>
#define MAX 100  // Maximum number of vertices in the graph

// DFS function
void dfs(int graph[MAX][MAX], int visited[MAX], int vertex, int n) {
    printf("%d ", vertex); // Print the current vertex
    visited[vertex] = 1;   // Mark the vertex as visited

    // Recursive call to all unvisited adjacent vertices
    for (int i = 0; i < n; i++) {
        if (graph[vertex][i] == 1 && !visited[i]) { // If there's an edge and it's not visited
            dfs(graph, visited, i, n);
        }
    }
}

int main() {
    int n, startVertex;
    int graph[MAX][MAX];
    int visited[MAX] = {0}; // Array to keep track of visited vertices

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the starting vertex (0 to %d): ", n - 1);
    scanf("%d", &startVertex);

    printf("DFS traversal: ");
    dfs(graph, visited, startVertex, n);
    printf("\n");

    return 0;
}
KO