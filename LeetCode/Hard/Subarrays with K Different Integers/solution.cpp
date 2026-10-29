class Solution {
public:

    typedef long long ll;
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        // optimal 
        return atMost(nums, k) - atMost(nums, k-1);

        // brute force gives TLE
        // ll n = nums.size();
        // ll cnt = 0;
        // for(ll i = 0; i<n; i++){
        //     unordered_map<int, int> mp;
        //     for(ll j = i; j<n; j++){
        //         mp[nums[j]]++;
        //         ll d = mp.size();
        //         if( d == k){
        //             cnt++;
        //         }
        //     }
        // }

        // return static_cast<int>(cnt);
    }

    int atMost(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int cnt = 0;

        unordered_map<int, int> mp;

        for (int j = 0; j < n; j++) {
            mp[nums[j]]++;

            while (mp.size() > k) {
                mp[nums[i]]--;

                if (mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }

                i++;
            }

            cnt += j - i + 1;
        }

        return cnt;
    }
};