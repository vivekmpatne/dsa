class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        
        unordered_map <int, int> mp;
        
        for(int j=0; j<n; j++){
            int diff = target - arr[j];
            
            if( mp.find(diff) != mp.end() ){
                return true;
            }
            
            mp[arr[j]] = j;
        }
        
        return false;
    }
};