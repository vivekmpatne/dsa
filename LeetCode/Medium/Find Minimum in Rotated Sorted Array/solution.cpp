class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
        while (low < high){
            // got TLR due to this formula : int mid = (low + high)/2;

            int mid = low + ( high - low )/2;

            if(arr[mid] > arr[high])
                low = mid + 1;
            else
                high = mid;
        }
        return arr[low];
    }
};