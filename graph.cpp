#include <bits/stdc++.h>
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


   

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 

void printGraph(vector<int> adj[], int v)
{
    for (int i = 0; i < v; ++i) {
        cout << "\n Adjacency list of vertex " << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout<<endl;
    }
}
 

int main()
{
	fastread();
    ll V = 5;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, V);
    return 0;
}
	
	