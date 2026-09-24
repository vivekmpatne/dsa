class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        const int n = min(28, int(nums.size()));
        for(int i=0; i<n; i++){
            int x = nums[i], digSum = 0;
            
            while( x>0 ){
                digSum += x%10;
                x /= 10;
            }
            if ( digSum == i) return i;
        }
        return -1;
    }
};