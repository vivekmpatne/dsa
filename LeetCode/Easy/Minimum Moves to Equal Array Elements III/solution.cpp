class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int Highest = nums[n-1];

        int cnt = 0;

        for(int i=0; i<n-1; i++){
            if ( nums [i] < Highest){
                int diff = Highest - nums[i];
                cnt += diff;
            }
        }
        return cnt;
    }
};