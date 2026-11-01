class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        
        if ( m == 0 ) return 0;
        if ( m == 1) return 1;
        
        
        int low = 1, high = m;
        while ( low <= high ){
            int mid =  low + ( high - low ) / 2;
            
            long long power = 1;
            
            for( int i = 1; i<=n; i++){
                power *= mid;
                
                if( power > m) break;
            }
            if ( power == m ) 
                return mid;
            else if ( power < m ) 
                low = mid + 1;
            else 
                high = mid - 1;
        }
        return -1;
    }
};