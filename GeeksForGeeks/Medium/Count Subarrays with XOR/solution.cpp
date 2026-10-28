class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
       int n = arr.size();

       int prefixXor = 0;

       unordered_map<int, int> mp;

       mp[0] = 1;

       int cnt = 0;

       for(int j = 0; j<n; j++){
           
           prefixXor ^= arr[j];
           
           int r = prefixXor ^ k;
           cnt += mp[r];
           mp[prefixXor]++;
       }

       return cnt;
    }
};