class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        // same as leetcode
        // lets do it by tabulation with space optimization
        // here n => can do 45 so recution gives TLE
        
        // if( n == 0 || n == 1 ) return n;
            
        // int curr = 1, prev = 1;
        // for( int i = 2; i <= n; i++){
        //     int temp = curr;
        //     curr = curr + prev;
        //     prev = temp;
        // }
        
        // return curr; // not working here preo
        
        // DP tabulation
        int f[n+1];
        
        f[0] = 0;
        f[1] = 1;
        
        for(int i=2; i<=n; i++){
            f[i] = f[i-1] + f[i-2];
        }
        return f[n];
    }
};