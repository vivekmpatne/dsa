class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
       int n = arr.size();

       int prefix[n];

       prefix[0] = arr[0];

       for(int i=1; i<n; i++){
           prefix[i] = prefix[i-1] + arr[i];
       }

       unordered_map<int, int> mp;

       mp[0] = mp[0] + 1;

       int cnt = 0;

       for(int j = 0; j<n; j++){
           int r = prefix[j] - k;
           cnt += mp[r];
           mp[prefix[j]] += 1;
       }

       return cnt;
    }
};