class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int n = nums.size();
    
        int currSum = 0;
        int cnt = 0;

        for(int i = 0; i < k; i++){
            currSum += nums[i];   
        }
        //if( currSum/k > threshold) cnt++;
        if( currSum >= k * threshold ) cnt++;
        
        
        //double avg = maxSum / k;
        for(int i = k; i < n; i++){
            currSum = (currSum - nums[i - k] + nums[i] );
            if( currSum >= k*threshold ) cnt++;
        }

        return cnt;
    }
};