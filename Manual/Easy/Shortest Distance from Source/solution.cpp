#include <bits/stdc++.h>
using namespace std;

// BFS + Adj List 
// print shortest path from src node ( any order distance = levels )

int main(){
    int n, e; // n => no of nodes/verties.  e => no of edges(lines)
    cin >> n >> e;

    vector<vector<int>> adj(n+1);
    for(int i = 0; i < e; i++){
        int u, v; // u,v => two nodes connectiong
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
        // u and v both push its undirected grp ( both side connected)
    }

    int src; cin>>src; // taking src input 
    
    vector<int> dist( n + 1, - 1); // init distance array
    queue<int> q;

    dist[src] = 0;  // src node to src node => distance is 0.
    
    q.push(src);

    while( !q.empty() ){
        int node = q.front();  // node => v
        q.pop();

        for(int neighbour : adj[node] ){  // neighbour => u
            if( dist[neighbour] == -1 ){ // if not visited ( dist[u] == -1 )
                dist[neighbour] = dist[node] + 1;  // marked as visited 
                // dist[u] = dist[v] + 1;
                q.push(neighbour); // q.push(u);
            }
        }
    }

    for( int i = 1; i <= n; i++){
        cout << dist[i] << " ";
    }
    return 0;