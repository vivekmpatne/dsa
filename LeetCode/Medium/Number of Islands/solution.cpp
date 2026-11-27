class Solution {
public:
    // using dfs
    void dfs(int row, int col, vector<vector<char>>& grid){
        int m = grid.size();
        int n = grid[0].size();

        grid[row][col] = '0';

        int delRow[] = {1, -1, 0, 0};
        int delCol[] = {0, 0, 1, -1};

        for(int i = 0; i< 4; i++){
            int newRow = row + delRow[i];
            int newCol = col + delCol[i];

            if( newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && grid[newRow][newCol] == '1' ){
                dfs(newRow, newCol, grid);
            }
        }

    }

    int numIslands(vector<vector<char>>& grid) {
        // using dfs
        int m = grid.size();
        int n = grid[0].size();

        int cnt = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    dfs(i, j, grid);
                }
            }
        }
        return cnt;
    }
};