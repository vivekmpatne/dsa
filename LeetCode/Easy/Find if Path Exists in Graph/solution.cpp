class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // using BFS    // edges => adj list => edges = { {0, 1}, {1, 2},  {2, 0} };
        if ( source == destination ) return true; // if both are same
        vector<vector<int>> adj(n);

        for(auto e : edges){
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> visited(n, 0);
        queue<int> q;

        visited[source] = 1;
        q.push(source);

        while( !q.empty() ){
            int node = q.front();
            q.pop();
            for(int neighBour : adj[node] ){
                if( !visited[neighBour] ){
                    if( neighBour == destination ) return true;
                    visited[neighBour] = 1;
                    q.push(neighBour);
                }
            }
        }
        return false;
    }   
};