class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();

        // brute force
        // its can be done by brute force becuse n is 1 to 50. can go till n
       
        int maxi = 0;
        for(int i = 0; i<n; i++){
            int inc = 1;
            int j = i + 1;
            
            while( j < n && nums[j] > nums[j-1]){
                inc++;
                j++;
            }
            j = i + 1;
            int dec = 1;
            while( j < n && nums[j] < nums[j-1]){
                dec++;
                j++;
            }
            maxi = max(maxi, max(inc, dec));
        }

        return maxi;
    }
};