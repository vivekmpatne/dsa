class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {


        // optimul. HashBhai
        unordered_map<int, int> freqMap;

        int n = nums.size();

        for(int i=0; i<n; i++){
            int val = nums[i];
            if( freqMap.find(val) != freqMap.end() && i - freqMap[val] <= k)
                return true;
            
            freqMap[val] = i;
        }

        return false;

        // brute force . TLE 
        // int n = nums.size();

        // for(int i=0; i<n; i++)  {
        //     for(int j=i+1; j<= i+k; j++){
        //         if( nums[i] == nums[j]){
        //             return true;
        //         }
        //     }
        // }

        // return false;
     
    }
};