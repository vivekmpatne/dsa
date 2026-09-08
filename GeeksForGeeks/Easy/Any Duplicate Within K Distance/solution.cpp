class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        
        int n = arr.size();
        unordered_map<int, int> HashBhai;
        
        for(int i=0; i<n; i++){
            int val = arr[i];
            if( HashBhai.find(val) != HashBhai.end() && i - HashBhai[val] <= k){
                return true;
            }
            HashBhai[val] = i;
        }
        
        return false;
    }
};