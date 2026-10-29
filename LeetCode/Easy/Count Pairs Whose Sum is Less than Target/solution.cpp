class Solution {
public:
    int countPairs(vector<int>& nums, int target) {

        // using two ptr and SW
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int cnt = 0;
        for(int i=0, j = n-1; i < j; ){

            int sum = nums[i] + nums[j];
            if(sum < target){
                cnt += j - i;
                i++;
            } 
            else{
                j--; // 
            }
        }
        return cnt;
    }
};