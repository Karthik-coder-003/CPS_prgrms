UNDIRECTED AND DIRECTED 

#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the graph (for undirected graph)
void addEdgeUndirected(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
    adj[v].push_back(u); // Add u to v's list
}

// Function to print the adjacency list representation of undirected graph
void printGraphUndirected(vector<int> adj[], int V) {
    for (int v = 0; v < V; ++v) {
        cout << "Adjacency list of vertex " << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout << endl;
    }
}

// Function to add an edge to the graph (for directed graph)
void addEdgeDirected(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
}

// Function to print the adjacency list representation of directed graph
void printGraphDirected(vector<int> adj[], int V) {
    for (int v = 0; v < V; ++v) {
        cout << "Adjacency list of vertex " << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout << endl;
    }
}

int main() {
    // Number of vertices
    int V = 5;

    // Adjacency list representation for undirected graph
    vector<int> undirected_adj[V];
    // Adjacency list representation for directed graph
    vector<int> directed_adj[V];

    // Adding edges to the undirected graph
    addEdgeUndirected(undirected_adj, 0, 1);
    addEdgeUndirected(undirected_adj, 0, 4);
    addEdgeUndirected(undirected_adj, 1, 2);
    addEdgeUndirected(undirected_adj, 1, 3);
    addEdgeUndirected(undirected_adj, 1, 4);
    addEdgeUndirected(undirected_adj, 2, 3);
    addEdgeUndirected(undirected_adj, 3, 4);

    // Adding edges to the directed graph
    addEdgeDirected(directed_adj, 0, 1);
    addEdgeDirected(directed_adj, 0, 4);
    addEdgeDirected(directed_adj, 1, 2);
    addEdgeDirected(directed_adj, 1, 3);
    addEdgeDirected(directed_adj, 1, 4);
    addEdgeDirected(directed_adj, 2, 3);
    addEdgeDirected(directed_adj, 3, 4);

    // Print the adjacency list for undirected graph
    cout << "Adjacency list for undirected graph:" << endl;
    printGraphUndirected(undirected_adj, V);

    // Print the adjacency list for directed graph
    cout << "\nAdjacency list for directed graph:" << endl;
    printGraphDirected(directed_adj, V);

    return 0;
}
