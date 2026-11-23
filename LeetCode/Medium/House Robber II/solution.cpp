class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if( n == 0 ) return 0;
        if( n == 1) return nums[0];

        int rob1 = 0; 
        int rob2 = 0;
        for(int i = 0; i<n-1; i++){
            int curr = max(rob2, nums[i] + rob1);
            rob1 = rob2;
            rob2 = curr;
        }

        int rob11 = 0;
        int rob22 = 0;
        for(int i = 1; i<n; i++){
            int curr1 = max(rob22, nums[i] + rob11);
            rob11 = rob22;
            rob22 = curr1;
        } 

        return max(rob22, rob2);

    }
};