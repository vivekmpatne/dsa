class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;

        while( low <= high){
            int mid = (high + low) / 2;
            if( nums[mid] == target) return mid; // return ans
            else if ( nums[mid] < target ) low = mid + 1; // goes right side ( big order)
            else {
                high = mid - 1; // goes left side (small order)
            }
        }
        return -1;
    }
};