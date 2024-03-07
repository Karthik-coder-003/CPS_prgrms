WEIGHTED AND UNWEIGHTED

#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the unweighted graph
void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
    adj[v].push_back(u); // Add u to v's list (for undirected graph)
}

// Function to print the adjacency list representation of unweighted graph
void printUnweightedGraph(vector<int> adj[], int V) {
    for (int v = 0; v < V; ++v) {
        cout << "Unweighted Graph - Adjacency list of vertex " << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout << endl;
    }
}

// Pair for weighted graph (destination vertex, weight)
typedef pair<int, int> iPair;

// Function to add an edge to the weighted graph
void addWeightedEdge(vector<iPair> adj[], int u, int v, int weight) {
    adj[u].push_back(make_pair(v, weight));
    adj[v].push_back(make_pair(u, weight)); // for undirected graph
}

// Function to print the adjacency list representation of weighted graph
void printWeightedGraph(vector<iPair> adj[], int V) {
    for (int v = 0; v < V; ++v) {
        cout << "Weighted Graph - Adjacency list of vertex " << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x.first << " (weight: " << x.second << ")";
        cout << endl;
    }
}

int main() {
    // Number of vertices
    int V = 5;
    // Adjacency list representation for unweighted graph
    vector<int> unweighted_adj[V];
    // Adjacency list representation for weighted graph
    vector<iPair> weighted_adj[V];

    // Adding edges to the unweighted graph
    addEdge(unweighted_adj, 0, 1);
    addEdge(unweighted_adj, 0, 4);
    addEdge(unweighted_adj, 1, 2);
    addEdge(unweighted_adj, 1, 3);
    addEdge(unweighted_adj, 1, 4);
    addEdge(unweighted_adj, 2, 3);
    addEdge(unweighted_adj, 3, 4);

    // Adding edges to the weighted graph
    addWeightedEdge(weighted_adj, 0, 1, 10);
    addWeightedEdge(weighted_adj, 0, 4, 20);
    addWeightedEdge(weighted_adj, 1, 2, 30);
    addWeightedEdge(weighted_adj, 1, 3, 40);
    addWeightedEdge(weighted_adj, 1, 4, 50);
    addWeightedEdge(weighted_adj, 2, 3, 60);
    addWeightedEdge(weighted_adj, 3, 4, 70);

    // Print the adjacency list for unweighted graph
    printUnweightedGraph(unweighted_adj, V);

    // Print the adjacency list for weighted graph
    printWeightedGraph(weighted_adj, V);

    return 0;
}
