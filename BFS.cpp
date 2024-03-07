BFS

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to add an edge to the graph
void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
}

// Function to print the adjacency list representation of graph
void printGraph(vector<int> adj[], int V) {
    for (int v = 0; v < V; ++v) {
        cout << "Adjacency list of vertex " << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout << endl;
    }
}

// Function to perform Breadth First Search
void BFS(vector<int> adj[], int V, int start) {
    vector<bool> visited(V, false);
    queue<int> queue;

    queue.push(start);
    visited[start] = true;

    while (!queue.empty()) {
        int current = queue.front();
        queue.pop();
        cout << current << " ";

        for (int v : adj[current]) {
            if (!visited[v]) {
                queue.push(v);
                visited[v] = true;
            }
        }
    }
}

int main() {
    // Number of vertices
    int V = 5;
    // Adjacency list representation
    vector<int> adj[V];

    // Adding edges to the graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print the adjacency list
    printGraph(adj, V);

    // Perform BFS starting from vertex 1
    cout << "Breadth First Traversal (starting from vertex 1): ";
    BFS(adj, V, 1);

    return 0;
}
