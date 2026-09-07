class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        unordered_map<int, int> freq;
        
        for(auto num : arr ){
            freq[num]++;
        }
        
        int maxFreq = 0;
        int res= INT_MIN;
        
        for( auto &it  : freq ){
            
            int ele = it.first;
            int cnt = it.second;
            
            if( cnt > maxFreq){
                maxFreq = cnt;
                res = ele;
            } 
            else if( cnt == maxFreq){
                res = max(res, ele);
            }
            
        }
        
        return res;
    }
};