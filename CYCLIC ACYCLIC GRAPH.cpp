CYCLIC GRAPH

#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the cyclic graph
void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
    adj[v].push_back(u); // Add u to v's list (for undirected graph)
}

// Function to print the adjacency list representation of cyclic graph
void printGraph(vector<int> adj[], int V) {
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
    // Adjacency list representation for cyclic graph
    vector<int> adj[V];

    // Adding edges to the cyclic graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print the adjacency list for cyclic graph
    printGraph(adj, V);
    return 0;
}




ACYCLIC 

#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the acyclic graph
void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
}

// Function to print the adjacency list representation of acyclic graph
void printGraph(vector<int> adj[], int V) {
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
    // Adjacency list representation for acyclic graph
    vector<int> adj[V];

    // Adding edges to the acyclic graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print the adjacency list for acyclic graph
    printGraph(adj, V);
    return 0;
}

