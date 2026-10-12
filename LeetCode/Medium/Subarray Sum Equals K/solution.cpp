class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n = nums.size();
        
        // int p[n];
        // p[0] = nums[0];
        // int sum = 0;

        // int cnt = 0;

        // for(int i=1; i<=n; i++){
        //     p[i] = p[i-1] + nums[i];
        // }

        // for(int j=0; j<n; j++){

            

        // }

        // bf 

        int n = nums.size();

        int cnt = 0;

        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i; j<n; j++){
                sum += nums[j];
                if( sum == k ){ cnt++; }
            }
        }
        return cnt; 
    }
};