class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> present, checked;

        for(auto a : nums){
            present[a] = true;
        }

        int lonChain = 0;
        for(auto a : nums){
            if( !checked[a] && !present[a-1] ){
                int currChain = 0;
                int start = a;
                while (present[start]){
                    currChain++;
                    checked[start] = true;
                    start++;
                }
                lonChain = max(lonChain, currChain);
            }
        }

        return lonChain;
    }
};