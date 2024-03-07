ADJACENCY LIST/MATRIX ( FOR 3 )

Matrix :

#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the directed graph
void addDirectedEdge(vector<vector<int>>& adjMatrix, int u, int v) {
    adjMatrix[u][v] = 1; // Set the cell to 1 to represent an edge from u to v
}

// Function to add an edge to the undirected graph
void addUndirectedEdge(vector<vector<int>>& adjMatrix, int u, int v) {
    adjMatrix[u][v] = 1; // Set the cell to 1 to represent an edge from u to v
    adjMatrix[v][u] = 1; // Set the cell to 1 to represent an edge from v to u
}

// Function to add an edge to the bidirectional graph
void addBidirectionalEdge(vector<vector<int>>& adjMatrix, int u, int v) {
    adjMatrix[u][v] = 1; // Set the cell to 1 to represent an edge from u to v
    adjMatrix[v][u] = 1; // Set the cell to 1 to represent an edge from v to u
}

// Function to print the adjacency matrix representation of the graph
void printAdjacencyMatrix(vector<vector<int>>& adjMatrix, int V) {
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Number of vertices
    int V = 5;
    // Adjacency matrix representation for directed graph
    vector<vector<int>> directed_adjMatrix(V, vector<int>(V, 0));
    // Adjacency matrix representation for undirected graph
    vector<vector<int>> undirected_adjMatrix(V, vector<int>(V, 0));
    // Adjacency matrix representation for bidirectional graph
    vector<vector<int>> bidirectional_adjMatrix(V, vector<int>(V, 0));

    // Adding edges to the directed graph
    addDirectedEdge(directed_adjMatrix, 0, 1);
    addDirectedEdge(directed_adjMatrix, 0, 4);
    addDirectedEdge(directed_adjMatrix, 1, 2);
    addDirectedEdge(directed_adjMatrix, 1, 3);
    addDirectedEdge(directed_adjMatrix, 2, 3);
    addDirectedEdge(directed_adjMatrix, 3, 4);

    // Adding edges to the undirected graph
    addUndirectedEdge(undirected_adjMatrix, 0, 1);
    addUndirectedEdge(undirected_adjMatrix, 0, 4);
    addUndirectedEdge(undirected_adjMatrix, 1, 2);
    addUndirectedEdge(undirected_adjMatrix, 1, 3);
    addUndirectedEdge(undirected_adjMatrix, 2, 3);
    addUndirectedEdge(undirected_adjMatrix, 3, 4);

    // Adding edges to the bidirectional graph
    addBidirectionalEdge(bidirectional_adjMatrix, 0, 1);
    addBidirectionalEdge(bidirectional_adjMatrix, 0, 4);
    addBidirectionalEdge(bidirectional_adjMatrix, 1, 2);
    addBidirectionalEdge(bidirectional_adjMatrix, 1, 3);
    addBidirectionalEdge(bidirectional_adjMatrix, 2, 3);
    addBidirectionalEdge(bidirectional_adjMatrix, 3, 4);

    // Print the adjacency matrix for directed graph
    cout << "Adjacency matrix for directed graph:" << endl;
    printAdjacencyMatrix(directed_adjMatrix, V);

    // Print the adjacency matrix for undirected graph
    cout << "\nAdjacency matrix for undirected graph:" << endl;
    printAdjacencyMatrix(undirected_adjMatrix, V);

    // Print the adjacency matrix for bidirectional graph
    cout << "\nAdjacency matrix for bidirectional graph:" << endl;
    printAdjacencyMatrix(bidirectional_adjMatrix, V);

    return 0;
}


LIST : 

#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the directed graph
void addDirectedEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
}

// Function to add an edge to the undirected graph
void addUndirectedEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
    adj[v].push_back(u); // Add u to v's list
}

// Function to add an edge to the bidirectional graph
void addBidirectionalEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
    adj[v].push_back(u); // Add u to v's list
}

// Function to print the adjacency list representation of the graph
void printAdjacencyList(vector<int> adj[], int V) {
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
    vector<int> directed_adj[V];
    // Adjacency list representation for undirected graph
    vector<int> undirected_adj[V];
    // Adjacency list representation for bidirectional graph
    vector<int> bidirectional_adj[V];

    // Adding edges to the directed graph
    addDirectedEdge(directed_adj, 0, 1);
    addDirectedEdge(directed_adj, 0, 4);
    addDirectedEdge(directed_adj, 1, 2);
    addDirectedEdge(directed_adj, 1, 3);
    addDirectedEdge(directed_adj, 2, 3);
    addDirectedEdge(directed_adj, 3, 4);

    // Adding edges to the undirected graph
    addUndirectedEdge(undirected_adj, 0, 1);
    addUndirectedEdge(undirected_adj, 0, 4);
    addUndirectedEdge(undirected_adj, 1, 2);
    addUndirectedEdge(undirected_adj, 1, 3);
    addUndirectedEdge(undirected_adj, 2, 3);
    addUndirectedEdge(undirected_adj, 3, 4);

    // Adding edges to the bidirectional graph
    addBidirectionalEdge(bidirectional_adj, 0, 1);
    addBidirectionalEdge(bidirectional_adj, 0, 4);
    addBidirectionalEdge(bidirectional_adj, 1, 2);
    addBidirectionalEdge(bidirectional_adj, 1, 3);
    addBidirectionalEdge(bidirectional_adj, 2, 3);
    addBidirectionalEdge(bidirectional_adj, 3, 4);

    // Print the adjacency list for directed graph
    cout << "Adjacency list for directed graph:" << endl;
    printAdjacencyList(directed_adj, V);

    // Print the adjacency list for undirected graph
    cout << "\nAdjacency list for undirected graph:" << endl;
    printAdjacencyList(undirected_adj, V);

    // Print the adjacency list for bidirectional graph
    cout << "\nAdjacency list for bidirectional graph:" << endl;
    printAdjacencyList(bidirectional_adj, V);

    return 0;
}

