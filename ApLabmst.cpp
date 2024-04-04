#include <vector>
#include <iostream>

using namespace std;

// Helper function to perform DFS and count valid paths
void dfs(int node, int parent, vector<int>& cost, vector<vector<int>>& graph, int k, int currentSum, int& count) {
    currentSum += cost[node];
    
    // If the current sum modulo k is 0, increment the count
    if (currentSum % k == 0) {
        count++;
    }
    
    // Visit all the children
    for (int child : graph[node]) {
        if (child != parent) {
            dfs(child, node, cost, graph, k, currentSum, count);
        }
    }
}

// Function to count vertical paths
int countVerticalPaths(int cost_count, int* costArray, int edge_nodes, int edge_edges, int* edge_from, int* edge_to, int k) {
    vector<int> cost(costArray, costArray + cost_count);
    vector<vector<int>> graph(edge_nodes);
    int count = 0;
    
    // Building the graph
    for (int i = 0; i < edge_edges; ++i) {
        graph[edge_from[i]].push_back(edge_to[i]);
        graph[edge_to[i]].push_back(edge_from[i]);
    }
    
    // Starting DFS from the root node which is node 1
    dfs(1, -1, cost, graph, k, 0, count);
    
    return count;
}

// Example usage
int main() {
    int cost_count = 5;
    int cost[] = {1, 2, 2, 1, 2};
    int edge_nodes = 5;
    int edge_edges = 4;
    int edge_from[] = {2, 2, 1, 2};
    int edge_to[] = {3, 1, 4, 5};
    int k = 2;
    
    cout << "Number of vertical paths: " << countVerticalPaths(cost_count, cost, edge_nodes, edge_edges, edge_from, edge_to, k) << endl;
    
    return 0;
}