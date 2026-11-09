class Solution {
public:
    int rob(vector<int>& nums) {
        // dp tabulation
        int n = nums.size();
        if ( n == 0) return 0;
        if ( n == 1) return nums[0];

        vector<int> dp(n);

        int kk = 0;
        dp[0] = max(nums[0], kk);
        dp[1] = max(nums[1], max(nums[0], kk));

        for(int i=2; i<n; i++){
            dp[i] = max( dp[i-1], nums[i] + dp[i-2]);
        }
        return dp[n-1];
    }
};