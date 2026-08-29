class Solution {
  public:
    int countSubsequences(string& s, int n) {
        // code here
        int MOD = 1e9 + 7;        
        std::vector<int> dp(n, 0);

        for (char c : s) {
            int digit = c - '0';
            std::vector<int> next_dp = dp;

            for (int j = 0; j < n; ++j) {
                if (dp[j] > 0) {
                    int next_remainder = (j * 10 + digit) % n;
                    next_dp[next_remainder] = (next_dp[next_remainder] + dp[j]) % MOD;
                }
            }

            int single_remainder = digit % n;
            next_dp[single_remainder] = (next_dp[single_remainder] + 1) % MOD;

            dp = next_dp;
        }

        return dp[0];
    }
};