class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int, int> prefixSum;
        int n = arr.size();
        int sum = 0;
        int maxLen = 0;
        
        for(int i = 0; i<n; i++){
            sum += arr[i];
            if( sum == 0 ) maxLen = i+1;
            else{
                if( prefixSum.find(sum) != prefixSum.end()){
                    maxLen = max(maxLen, i - prefixSum[sum]);
                }else{
                    prefixSum[sum] = i;
                }
            }
            
        }
        
        return maxLen;
    }
};