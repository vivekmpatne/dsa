class Solution {
  public:
    int findFrequency(vector<int> nums, int x) {
        // code here
        int n = nums.size();
        unordered_map<int, int> freq;
        
        for(auto num : nums ){
            freq[num]++; // freq[num] += 1; or freq[num] = freq[num] + 1;
        }
        
        // or 
        
        // for(int i=0; i<n; i++){
        //     freq[arr[i]]++;
        // }
        
        
        return freq[x];
    }
};