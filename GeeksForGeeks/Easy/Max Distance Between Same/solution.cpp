class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        // using hashmap optimized 
        unordered_map<int, int> mp;
        int n = arr.size();
        
        int maxi = 0;
        
        for(int i=0; i<n; i++){
            if( mp.find(arr[i])  != mp.end()){
                maxi = max(maxi,  i - mp[arr[i]]);
            }else{
                mp[arr[i]]= i;
            }
        }
        
        return maxi;
    }
};