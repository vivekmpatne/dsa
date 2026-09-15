// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 0, high = n;
        while ( low <= high){
            long long mid = ( high + low ) / 2;
            if( isBadVersion(mid) ) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};