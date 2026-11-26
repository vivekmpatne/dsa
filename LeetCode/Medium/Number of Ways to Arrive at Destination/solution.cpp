class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        const int MOD = 1e9 + 7;
        // adj list {neighBour, time} 
        vector<vector<pair<int, int>>> adj(n);
        for(auto e : roads){
            int u = e[0];
            int v = e[1];
            int time = e[2];

            adj[u].push_back( { v, time} );
            adj[v].push_back( { u, time} );
        }

        vector<long long> dist(n, LLONG_MAX);
        vector<long long> ways(n, 0);

        priority_queue<
            pair<long long, int>, 
            vector<pair<long long, int>>,
            greater<pair<long long, int>> 
        > pq;

        dist[0] = 0;
        ways[0] = 1;

        pq.push( {0, 0} );

        while( !pq.empty() ){
            long long d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if( d > dist[node]) continue;
            for(auto it : adj[node] ){
                int neighB = it.first;
                int time = it.second;

                long long newDist = d + time;

                if( newDist < dist[neighB]){
                    dist[neighB] = newDist;

                    ways[neighB] = ways[node];

                    pq.push( {newDist, neighB});
                }
                else if( newDist == dist[neighB]){
                    ways[neighB] = (ways[neighB] + ways[node]) % MOD;
                }
            }
        }
        return ways[n-1];
    }
};