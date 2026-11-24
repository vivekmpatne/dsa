class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxSum = 0;
        double currSum = 0;
        for(int i = 0; i < k; i++){
            currSum += nums[i];
        }
        maxSum = currSum;

        // sliding window ( Exclude prev and include next )
        // for ( i = 1 to n - k ) currSum += nums[i - 1] + nums[ n - k + i ] gives outfor bound

        for(int i = k; i < n; i++){
            currSum = (currSum - nums[i - k] + nums[i] );
            maxSum = max(maxSum, currSum);
        }

        double avg = maxSum/k;

        return avg;
        
    }
};