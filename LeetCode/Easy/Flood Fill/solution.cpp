class Solution {
public:

    void dfs(int row, int  col, vector<vector<int>> & image, int originalColor, int color){
        int m = image.size();
        int n = image[0].size();

        image[row][col] = color;
        int delRow[] = {1, -1, 0, 0};
        int delCol[] = {0, 0, 1, -1};

        for(int i = 0; i< 4; i++){
            int newRow = row + delRow[i];
            int newCol = col + delCol[i];

            if( newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && image[newRow][newCol] == originalColor ){
                dfs(newRow, newCol, image, originalColor, color);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if( originalColor == color) return image;
        dfs(sr, sc, image, originalColor, color);
        return image;
    }
};