class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        int curMax = 0, maxSum = nums[0];
        int curMin = 0, minSum = nums[0];

        for(int i = 0; i < n; i++){
            curMax = max(nums[i], curMax + nums[i]);
            maxSum = max(maxSum, curMax);

            curMin = min(nums[i], curMin + nums[i]);
            minSum = min(minSum, curMin);

            total += nums[i];
        }

        if(maxSum < 0 ) return maxSum;
        return max(maxSum, total - minSum);


        // int n = nums.size();
        // int prev = nums[0];
        // int maxi = nums[0];

        // for(int i = 0;  i< n; i++){
        //     int curr = max(curr + nums[i], nums[i]);
        //     maxi = max(maxi, curr);
        // }
        // return maxi;
    }
};