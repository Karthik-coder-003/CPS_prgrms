GRAPH CONSTRUCTION ( BIDIRECTIONAL) 


#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the bidirectional graph
void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
    adj[v].push_back(u); // Add u to v's list
}

// Function to print the adjacency list representation of the bidirectional graph
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
    // Adjacency list representation for bidirectional graph
    vector<int> adj[V];

    // Adding edges to the bidirectional graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print the adjacency list for bidirectional graph
    cout << "Adjacency list for bidirectional graph:" << endl;
    printGraph(adj, V);

    return 0;
}


UNDIRECTED 

#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the undirected graph
void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
    adj[v].push_back(u); // Add u to v's list
}

// Function to print the adjacency list representation of undirected graph
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
    // Adjacency list representation for undirected graph
    vector<int> adj[V];

    // Adding edges to the undirected graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print the adjacency list for undirected graph
    cout << "Adjacency list for undirected graph:" << endl;
    printGraph(adj, V);

    return 0;
}


DIRECTED 

#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the directed graph
void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
}

// Function to print the adjacency list representation of directed graph
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
    // Adjacency list representation for directed graph
    vector<int> adj[V];

    // Adding edges to the directed graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print the adjacency list for directed graph
    cout << "Adjacency list for directed graph:" << endl;
    printGraph(adj, V);

    return 0;
}
