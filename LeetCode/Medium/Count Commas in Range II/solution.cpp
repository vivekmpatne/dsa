class Solution {
public:
    long long countCommas(long long n) {
        int64_t cnt = 0;
        for(int64_t p = 1000; p<=n; p *= 1000){
            cnt += n - p + 1;
        }
        return cnt;
    }
};