class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // int n = nums.size();
        // int prefix[n];

        // prefix[0] = nums[0];

        // for(int i=1; i<n; i++){
        //     prefix[i] = prefix[i-1] + nums[i];
        // }

        // int maxi = 0;

        // for(int j=0; j<n; j++){
        //     int sum = prefix[j];
        //     maxi = max(maxi, sum);
        // }

        // return maxi;

        int maxi = nums[0]; 
        int current_sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            current_sum += nums[i];
            
            maxi = max(maxi, current_sum);
            
            if (current_sum < 0) {
                current_sum = 0;
            }
        }

        return maxi;
        
    }
};