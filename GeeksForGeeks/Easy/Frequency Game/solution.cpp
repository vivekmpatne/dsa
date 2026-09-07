class Solution {
  public:
    int largeAndMinFreq(vector<int>& arr) {
        // code here((
        int n = arr.size();
        
        unordered_map<int, int> freq;
        for( int num : arr){
            freq[num]++;
        }
        int minFreq = INT_MAX;
        int maxEle = INT_MIN;
        
        for( auto& it : freq){
            int ele = it.first;
            int cnt = it.second;
            
            if(cnt < minFreq){
                minFreq = cnt;
                maxEle = ele;
            } 
            else if( cnt == minFreq ){
                maxEle = max(maxEle, ele);
            }
        }
        return maxEle;
    }
};