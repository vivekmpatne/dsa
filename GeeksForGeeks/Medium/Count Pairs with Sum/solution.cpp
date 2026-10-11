class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        int n = arr.size();
        
        int cnt = 0;
        unordered_map <int, int> mp;
        
        for(int j=0; j<n; j++){
            
            int diff = target - arr[j];
            
            if(mp.count(diff)){
                cnt += mp[diff];
            }
            
            mp[arr[j]]++;
            
        }
        
        return cnt;
    }
};