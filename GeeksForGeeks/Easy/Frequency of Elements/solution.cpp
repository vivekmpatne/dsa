class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here 
        // optimal using hasing 
        unordered_map<int, int> freq;
        vector<vector<int>> ans;
        
        
        for( int num : arr){
            freq[num]++;
        }
        
        for(auto &it : freq ){
            ans.push_back({it.first, it.second});
        }
        
        return ans;
    }
    
    // brute force but it gives TLE due to the constraints arr side if 10 power 5.
    
    
    
};