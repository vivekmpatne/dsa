class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        // same as array elemt pair div by 60.  its k instred of 60
        int n = arr.size();
        vector<int> mp(k, 0);
    
        int cnt = 0;

        for(int num : arr){
            int rem = ((num % k) + k) % k; // Normalize negative remainders
            int need = ( k - rem ) % k;

            // If a matching partner is waiting, pair them up and consume it
            if(mp[need] > 0){
                mp[need]--;
                cnt++;
            }else{
                // Otherwise, wait for a partner
                mp[rem]++;
            }
        }
        return cnt == n/2;
    }
};