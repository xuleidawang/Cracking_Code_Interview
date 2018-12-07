#include <iostream>
#include <vector>
using namespace std;

// data structure to store graph edges
struct Edge {
	Edge(int s,int t):src(s), dest(t){}
	int src, dest;
};

// class to represent a graph object
class Graph
{
public:
	int V;
	// construct a vector of vectors to represent an adjacency list
	vector<vector<int> > adj;

	// Graph Constructor
	Graph(vector<Edge> const &edges, int N)
	{
		V = N;
		// resize the vector to N elements of type vector<int>
		adj.resize(N);

		// add edges to the directed graph
		for (auto &edge: edges)
		{
			// insert at the end
			adj[edge.src].push_back(edge.dest);

			// Uncomment below line for undirected graph
			// adjList[edge.dest].push_back(edge.src);
		}
	}


	void addEdge(int s, int t){
		adj[s].push_back(t);
	}
};

// print adjacency list representation of graph
void printGraph(Graph const& graph, int N)
{
	for (int i = 0; i < N; i++)
	{
		// print current vertex number
		cout << i << " --> ";

		// print all neighboring vertices of vertex i
		for (int v : graph.adj[i])
			cout << v << " ";
		cout << endl;
	}
}

// Graph Implementation using STL
