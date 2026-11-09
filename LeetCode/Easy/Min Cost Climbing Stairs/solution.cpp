class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // its oppo of max sum subject, no 2 adj elemnt.
        // here need min
        int n = cost.size();
        if( n == 0 ) return 0;

        vector<int> dp(n+1, 0);

        // base case
        dp[0] = 0;
        dp[1] = 0;

        for(int i=2; i<=n; i++){
            dp[i] = min( dp[i-1] + cost[i-1],  dp[i-2] + cost[i-2] );
        }
        
        return dp[n];
    }
};