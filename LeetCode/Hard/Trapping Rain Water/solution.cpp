class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int l_max = 0, r_max = 0;
        int l = 0, r = n - 1;
        int totWater = 0;

        while( l  < r){
            
            l_max = max( l_max, height[l]);
            r_max = max( r_max, height[r]);

            if(l_max < r_max){
                totWater += l_max - height[l];
                l++;
            }
            else{
                totWater += r_max -  height[r];
                r--;
            }
        } 
        return totWater;
    }
};