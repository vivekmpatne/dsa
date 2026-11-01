class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;

        while( low <= high ){
            //int mid = high + low / 2;
            int mid = low + (high - low) / 2;

            if( arr[mid] == target) return true;

            // Duplicates make it impossible to identify
            // which half is sorted
            if( arr[low] == arr[mid] && arr[mid] == arr[high]){
                low++; high--;
            }
            
            // Left half is sorted
            else if ( arr[low] <= arr[mid]){
                if ( arr[low] <= target && target < arr[mid])
                    high = mid - 1;
                else 
                    low = mid + 1;
            }

            // Right half is sorted
            else {
                if ( arr[mid] < target && target <= arr[high])
                    low = mid + 1;
                else 
                    high = mid - 1;
            }
        }
        return false;
    }
};