class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        // now approch 3 ( counting sort ) becouse 1 <= nums[i] <= 100
        // vector<int> frq(101, 0);
        // for(int num : nums){
        //     frq[num]++;
        // }
        // int cnt = 0;
        // for(int i=1; i<=100-k; ++i){
        //     cnt += frq[i] * frq[i+k];
        // }
        // return cnt;

    
        // Approach 2: Hash Map (Frequency Map)
        unordered_map<int, int> seen;
        int cnt = 0;
        
        for (int num : nums) {
            // Check if (num - k) exists in the map
            if (seen.count(num - k)) {
                cnt += seen[num - k];
            }
            // Check if (num + k) exists in the map
            if (seen.count(num + k)) {
                cnt += seen[num + k];
            }
            
            // Record the current number's frequency
            seen[num]++;
        }
        
        return cnt;



        // int cnt = 0;
        // for(int i=0; i<nums.size(); ++i){
        //     for(int j=i+1; j<nums.size(); ++j){
        //         if( abs(nums[i] - nums[j]) == k ) cnt++;
        //     }
        // }
        // return cnt;
    }
};