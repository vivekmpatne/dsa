class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        // Sieve of erastoroes
        vector<int> lp(n + 1);
        
        for(int i = 1; i<=n; i++){
            lp[i] = i;
        }
        
        for(int i = 2; i*i <= n; i++){
            if(lp[i] == i){
                for(int j = i * i; j<=n; j += i){
                    if( lp[j] == j ) lp[j] = i;
                }
            }  
        }
        // vector<int> ans;
        // for(int i = 1; i<= n; i++){
        //     ans.push_back(lp[i]);
        // }
        return lp;
    }
};