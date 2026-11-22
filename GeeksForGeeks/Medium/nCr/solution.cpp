class Solution {
  public:
    
    // 2nd 
    int dp[34][34];
    
    // 2nd
    int solve(int n, int r){
        if (r > n) return 0;
        if( r == 0 || r == n) return 1;
        if ( dp[n][r] != -1) return dp[n][r];
        
        return dp[n][r] = solve(n-1, r-1) + solve(n-1, r);
    }
    
    int nCr(int n, int r) {
        // code here
        
        // brute force Recursion ( Pascals ) => TLE ( 2^n )
        // if ( r > n) return 0;
        // if( r == 0 || r == n) return 1;
        // return nCr(n-1, r-1) + nCr(n-1, r);
        
        // 2nd => Recurion + DP ( memo ) store already calculated in dp
        memset(dp, -1, sizeof(dp));
        return solve(n, r);
        
        
    }
};