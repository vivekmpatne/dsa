class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        // easy trick ( opr += i )
        sort(nums.begin(), nums.end(), greater<int>());
        int opr = 0;
        int prevUniq = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i] == prevUniq ) continue;

            if(nums[i] < prevUniq){
                opr += i;
            }
            prevUniq = nums[i];
        }
        return opr;
    }
};