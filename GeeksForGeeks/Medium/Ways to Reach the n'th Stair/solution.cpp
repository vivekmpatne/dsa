class Solution {
  public:
    int countWays(int n) {
        // code here
        // this also same as LC = > stairs count 
        
        if ( n == 0 || n == 1) return n;
        int curr = 1, prev = 1;
        
        for(int i=2; i<=n; i++){
            int temp = curr;
            curr += prev;
            prev = temp;
        }
        return curr;
    }
};
