class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        if( n == 0) return 0;
        
        vector<int> dp(n + 1, 0);
        
        dp[1] = arr[0]; 
        if (n > 1) {
            dp[2] = max(arr[0], arr[1]);
        }
        
        int i = 3;
        while ( i <= n){
            
            dp[i] = max(dp[i-1], arr[i-1] + dp[i-2]);
            
            i++;
        }
        
        return dp[n];
    }
};