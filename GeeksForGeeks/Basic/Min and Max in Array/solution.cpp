class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> ans(2, 0);
        
        sort(arr.begin(), arr.end());
        ans[0] = arr[0];
        ans[1] = arr[n-1];
        
        return ans;
    }
};