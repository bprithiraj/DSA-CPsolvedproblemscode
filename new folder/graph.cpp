#include <bits/stdc++.h>
using namespace std;
 
// Define number of vertices in
// the graph and infinite value
#define V 5
#define INF INT_MAX
 
// Function to do DFS through the nodes
int minimumCostSimplePath(int u, int destination,
                    bool visited[], int graph[][V])
{
 
    // check if we find the destination
    // then further cost will be 0
    if (u == destination)
        return 0;
 
    // marking the current node as visited
    visited[u] = 1;
 
    int ans = INF;
 
    // traverse through all
    // the adjacent nodes
    for (int i = 0; i < V; i++) {
        if (graph[u][i] != INF && !visited[i]) {
 
            // cost of the further path
            int curr = minimumCostSimplePath(i,
                        destination, visited, graph);
 
            // check if we have reached the destination
            if (curr < INF) {
 
                // Taking the minimum cost path
                ans = min(ans, graph[u][i] + curr);
            }
        }
    }
 
    // unmarking the current node
    // to make it available for other
    // simple paths
    visited[u] = 0;
 
    // returning the minimum cost
    return ans;
}
 
// driver code
int main()
{

    int n;
    cin>>v;
    int V=2*n;

 
    // initialising the graph
    int graph[V][V];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            graph[i][j] = INF;
        }
    }
 
    // marking all nodes as unvisited
    bool visited[V] = { 0 };
    int c;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x][y]=0;
    }

 
   
 
    // source and destination
    int s = 0, t = 2;
 
    // marking the source as visited
    visited[s] = 1;
 
    cout << minimumCostSimplePath(s, t,
                            visited, graph);
 
    return 0;
    }