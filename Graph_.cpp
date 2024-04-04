#include <bits/stdc++.h>
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

class graph{
public:
	unordered_map<int,list<int>>adj;

	void addEdge(int u ,int v ,bool direction){

		adj[u].push_back(v);
		if(direction == 0){

			adj[v].push_back(u);
		}
	}

	void print(){
		for(auto i: adj){
			cout<<i.first<<"->";
			for(auto j: i.second){
				cout<<j<<", ";
			}
			cout<<endl;
		}
	}

};

int main() 
{

   fastread();
	int n,m;
	cin>>n>>m;
	graph g;

	for (int i = 0; i < n; ++i)
	{
	int u,v;
	cin>>u>>v;
	g.addEdge(u,v,0);		
	}
	g.print();
	return 0;
}