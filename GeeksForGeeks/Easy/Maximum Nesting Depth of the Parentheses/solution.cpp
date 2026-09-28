class Solution {
  public:
    int maxDepth(string &s) {
        // code here
        int maxi = 0;
        int depth = 0;
        
        for(char c : s){
            
            if ( c == ')'){
                depth--;
            }
            
            if( c != '(') continue;
            depth++;
            if( depth > maxi) maxi = depth;
        }
        
        return maxi;
    }
};