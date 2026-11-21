class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;

        backtrack(0, n, k, res, curr);
        return res;
    }
private:
    void backtrack(int pos, int n, int k, vector<vector<int>>& res, vector<int> & curr){
        
        if( curr.size() > k) return;
        if( pos == n ){
            if( curr.size() == k)
                res.push_back(curr);
            return;
        }
        curr.push_back(pos+1);
        backtrack(pos + 1, n, k, res, curr);
        curr.pop_back();

        backtrack(pos+1, n, k, res, curr);
    }
};