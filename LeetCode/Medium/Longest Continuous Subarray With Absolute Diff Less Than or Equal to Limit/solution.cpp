class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();

        multiset<int> st;
        int ans = 0;

        for(int i=0, j=0; j<n; j++){
            st.insert(nums[j]); // add curr element

            // window: [i......................j]
            int d = *st.rbegin() - *st.begin();

            while( d > limit){
                st.erase( st.find(nums[i]) ); // Remove one occrrence
                i++;
                d = *st.rbegin() - *st.begin();
            }
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};