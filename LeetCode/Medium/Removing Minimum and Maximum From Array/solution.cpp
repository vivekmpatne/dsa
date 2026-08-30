class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int lt = 0;
        int rt = 0;
        
        for(int i=1; i<n; i++){
            if(nums[i] < nums[lt])
                lt = i;
            
            if(nums[i] > nums[rt])
                rt = i;
        }

        if(lt < rt){
            swap(lt, rt);
        }

        int ans = n;

        for(int i=0; i<=n; i++){
            int extra = 0;
            if(rt >= i)
                extra = n - rt;
            else if( lt >= i)
                extra = n - lt;
            ans = min(ans, i + extra);
        }
        return ans;
    }
};