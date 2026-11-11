class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // same as prev ques need to replace 60 with and and prev one cnt pair its sub array sum
        int n = nums.size();
        int prefix[n];
       
        // for(int i = 1; i<n; i++){
        //     prefix[i] = prefix[i-1] + nums[i];
        // }

        unordered_map<int, int> mp;
        mp[0] = 1;
        int cnt = 0;
        int prefsum = 0;

        for(int j = 0; j<n; j++){
            prefsum += nums[j];

            int rem = prefsum % k;
            if( rem < 0 ) rem += k; // -ve values

            // If this remainder has been seen before, add its frequency
            if( mp.find(rem) != mp.end() ){
                cnt += mp[rem];
            }           

            mp[rem]++; 
        }
        return cnt;
    }
};