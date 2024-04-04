#include <bits/stdc++.h>
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

class graph{

	int v;
	vector<list<int>> adj;
public:
	graph(int v);

	void addEdge(int v,int w);
	void BFS(int s);
};

graph::graph(int v)
{
    this->v = v;
    adj.resize(v);
}

void graph::addEdge(int v, int w)
{
    adj[v].push_back(w); 
}

void graph::BFS(int s){
	vector<bool> visited;
	visited.resize(v,false);


	list<int> queue;

	visited[s] = true;
	queue.push_back(s);


	while(!queue.empty()){
		s = queue.front();
		cout<<s<<" ";
		queue.pop_front();



		for(auto i : adj[s]){
			if(!visited[i]){
				visited[i] = true;
				queue.push_back(i);
			}
		}
	}
}

int main() 
{

   fastread();
   graph g(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 0);
    g.addEdge(2, 4);
    g.addEdge(4, 3);
    
    g.BFS(0);


	
	return 0;
}