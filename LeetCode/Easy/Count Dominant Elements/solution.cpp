class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i<n; i++){
            long long sum = 0;
            int cnt = 0;
            if( i > 0){
                sum += nums[i - 1];
                cnt++;
            }
            if( i + 1 < n){
                sum += nums[i + 1];
                cnt++;
            }
            if( 1LL * cnt * nums[i] >= sum){
                ans++;
            }
        }
        return ans;
    }
};