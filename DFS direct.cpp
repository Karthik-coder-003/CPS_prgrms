DFS in directed graph

#include <iostream>
#include <vector>
#include <stack>

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

// Function to perform Depth First Search
void DFS(vector<int> adj[], int V, int start) {
    vector<bool> visited(V, false);
    stack<int> stack;

    stack.push(start);
    visited[start] = true;

    while (!stack.empty()) {
        int current = stack.top();
        stack.pop();
        cout << current << " ";

        for (int v : adj[current]) {
            if (!visited[v]) {
                stack.push(v);
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

    // Perform DFS starting from vertex 1
    cout << "Depth First Traversal (starting from vertex 1): ";
    DFS(adj, V, 1);

    return 0;
}
