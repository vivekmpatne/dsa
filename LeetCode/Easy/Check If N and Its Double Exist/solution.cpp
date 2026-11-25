class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        // bf
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++ ){
                if( nums[i] == 2*nums[j] && (i != j ) ) return true;
            }
        }
        return false;
    }
};