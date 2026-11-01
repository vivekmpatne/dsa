class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while( low <= high){
            int mid = ( high + low) / 2;

            if( nums[ mid ] == target ) return mid; // found => mid is the index. 
            // not found then right positon index 
            else if ( nums[mid] < target ) low = mid + 1; 
            // right position idx(low) = mid + 1
            else high = mid - 1; 
        }

        return low;

        // brute force
        //     int n = nums.size();
        //     int cnt = 0;
        //     for( int i = 0; i<n; i++){
        //         if(nums[i] < target){
        //            cnt++;
        //         }
            
        //     }
        //    return cnt;
    }
};