#include<bits/stdc++.h>
using namespace std;
 

void Edge(vector<int> adj[], int v1, int v2)
{

    adj[v1].push_back(v2);
    adj[v2].push_back(v1);
}
 

void BFS(int v1, vector<int> adj[], vector<bool> &Visited)
{
 
    list<int> queue;
 

    Visited[v1] = true;
    queue.push_back(v1);
 

    while(!queue.empty())
    {

        v1 = queue.front();
        cout << v1 << " ";
        queue.pop_front();
 

        for (int i = 0; i != adj[v1].size(); i++)
        {
            if (!Visited[adj[v1][i]])
            {
                Visited[adj[v1][i]] = true;
                queue.push_back(adj[v1][i]);
            }
        }
    }
}
 

int main()
{
    int n = 8;
    vector<int> adj[n];
 
    
    Edge(adj, 0, 1);
    Edge(adj, 0, 2);
    Edge(adj, 1, 2);
    Edge(adj, 2, 0);
    Edge(adj, 2, 3);
    Edge(adj, 3, 4);
    Edge(adj, 5, 4);
    Edge(adj, 5, 6);
    Edge(adj, 7, 6);
   
    vector<bool> Visited(n, false);

    for (int u=0; u<n; u++)
        if (Visited[u] == false)
            BFS(u, adj, Visited);
           
    return 0;
}