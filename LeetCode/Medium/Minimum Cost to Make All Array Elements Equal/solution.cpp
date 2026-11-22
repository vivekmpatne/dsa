class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        long long res = LLONG_MAX;
        for(int i = 0; i<n; i++){
            cnt = i > 0 && nums[i] == nums[i-1] ? cnt + 1 : 1;

            if( cnt > 1 || (0 < i && i < n - 1)){
                res = min(res, 1LL*(n - cnt) * nums[i]);
            }

        }
        return res;
    }
};