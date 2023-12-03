#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
}

void adjacencylist(vector<int> adj[], int V)
{
	for (int i = 0; i < V; i++) {
		cout << i << "->";
		for (int& x : adj[i]) {
			cout << x << " ";
		}
		cout << endl;
	}
}

void initGraph(int V, int edges[3][2], int noOfEdges)
{
	
	vector<int> adj[V];

	for (int i = 0; i < noOfEdges; i++) {

		addEdge(adj, edges[i][0], edges[i][1]);
	}

	adjacencylist(adj, V);
}

int main()
{
	
	int V = 3;

	int edges[3][2] = { { 0, 1 }, { 1, 2 }, { 2, 0 } };

	int noOfEdges = 3;

	initGraph(V, edges, noOfEdges);

	return 0;
}
