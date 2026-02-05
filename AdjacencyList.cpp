// A simple representation of graph using STL
#include <bits/stdc++.h>
using namespace std;

//directed and undirected graph

void addEdge(vector<int> adj[], int u, int v,int directed)
{
	adj[u].push_back(v);
	if(!directed)
	 adj[v].push_back(u);
}



void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v) {
	   cout<<"\n Adjacency list of vertex "<<v<<"\n head ";
		for (auto x : adj[v])
			cout<<"-> "<<x;
		printf("\n");
	}
}

int main()
{
	int directed,V = 5;
	cout<<"Press 1 for Directed Graph and Press 0 for Undirected Graph"<<endl;
    cin>>directed;
	vector<int> adj[V];
	addEdge(adj, 0, 1,directed);
	addEdge(adj, 0, 4,directed);
	addEdge(adj, 1, 2,directed);
	addEdge(adj, 1, 3,directed);
	addEdge(adj, 1, 4,directed);
	addEdge(adj, 2, 3,directed);
	addEdge(adj, 3, 4,directed);
	printGraph(adj, V);
	return 0;
}
