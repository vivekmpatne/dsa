class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        // ap 1 : Prime Factor using Trial Division
        set<int> st;
        for( int num : nums){
            for(int p = 2; p*p <= num; p++){
                if( num % p == 0) {
                    st.insert(p);
                    while( num % p == 0) num /= p;
                }
            }
            if ( num > 1) st.insert(num);
        }
        return st.size();
    }
};