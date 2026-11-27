class Solution {
public:
    void dfs(int node, vector<vector<int>>& rooms, vector<int>& visited){
        visited[node] = 1;

        for(int neighB : rooms[node]){
            if( !visited[neighB]){
                dfs(neighB, rooms, visited);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // using dfs
        int n = rooms.size();
        vector<int> visited(n, 0);

        dfs(0, rooms, visited);

        for(int i = 0; i<n; i++){
            if( !visited[i] ){
                return false;
            }
        }
        return true;
    }
};