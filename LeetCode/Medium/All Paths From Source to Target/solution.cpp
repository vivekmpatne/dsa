class Solution {
public:
    void dfs(int node, int destination,
             vector<vector<int>>& graph,
             vector<int>& path,
             vector<vector<int>>& ans) {

        // Dest reached
        if (node == destination) {
            ans.push_back(path);
            return;
        }
        for (int neighbour : graph[node]) {

            path.push_back(neighbour);
            dfs(neighbour, destination, graph, path, ans);
            // Backtracking
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> ans;
        vector<int> path;

        path.push_back(0);

        dfs(0, n - 1, graph, path, ans);

        return ans;
    }
};
