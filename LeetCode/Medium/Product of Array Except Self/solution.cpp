class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans( n, 1);

        int left = 1;
        for(int i = 0; i <n; i++ ){
            ans[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for(int i = n - 1; i >= 0; i --){
            ans[i] *= right;
            right *= nums[i];
        }

        return ans;

        // BF, left and right prefix arra
        // int n = nums.size();

        // int pre[n] = {0}; // left arr
        // int suf[n] = {0}; // right arr
        // int ans[n] = {0}; // product arr

        // for(int i = 1; i<n; i++){
        //     pre[i] = pre[i-1]*nums[i-1];
        // }
        // for(int i = n - 2; i>= 0; i--){
        //     suf[i] = suf[i+1]*nums[i+1];
        // }
        // for(int i = 0; i < n; i++){
        //     ans[i] = pre[i]*suf[i];
        // }
        // return ans;
    }
};