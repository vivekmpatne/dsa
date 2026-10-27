class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int n = nums.size();

        vector<int> p(n+1, 0);

        for(int i=1; i<=n; i++){
            p[i] = p[i-1] + nums[i - 1];
        }
        // Maximum subarray sum ending at or before each position
        vector<int> L(n+1, 0);

        for(int i = firstLen; i <= n; i++){
            int sum = p[i] - p[i - firstLen];
            L[i] = max( L[i-1], sum );
        }

        // Maximum subarray sum starting at or after each position
        vector<int> R(n+1, 0);

        for(int i= n - secondLen; i>= 0; i--){
            int sum = p[i + secondLen ] - p[i];
            R[i] = max( R[i + 1], sum);
        }

        // Combine both non overlapping subarrays 
        int ans = 0;
        for(int i = firstLen; i <= n - secondLen; i++){
            ans = max(ans, L[i] + R[i]);
        }

        // reverse subarray lengths 
        fill(L.begin(), L.end(), 0);
        fill(R.begin(), R.end(), 0);

        for(int i = secondLen; i<= n; i++){
            int sum = p[i] - p[i - secondLen];
            L[i] = max(L[i-1], sum);
        }

        for(int i = n - firstLen; i >= 0; i--){
            int sum = p[i + firstLen] - p[i];
            R[i] = max(R[ i + 1 ], sum);
        }

        for( int i = secondLen; i<= n - firstLen; i++){
            ans = max(ans, L[i] + R[i]);
        }

        return ans;
        
    }
};