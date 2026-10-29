class Solution {
  public:
    vector<int> diffArray(vector<int>& arr, vector<vector<int>>& opr) {
        // code here
        // range query ques... // bf gives TLE => due to arr and opr => 10^5
        int n = arr.size();
        
        vector<int> diff(n+1, 0);
        
        for(auto &op : opr){ // op => traver arr in 2d arr { {}, {}, {} }
            int l = op[0];  // { {0}, {} }
            int r = op[1];  // { {0, 1 },  {} }
            int v = op[2];  // { {0, 1, 2},  {} }
            
            // range query tick arr[l] = arr[l] + 1; arr[r+1] = arr[r+1] - 1;
            diff [ l ] += v;  
            diff [ r + 1 ] -= v;
        }
        
        int run = 0;
        for(int i=0; i<n; i++){
            run += diff[i];
            arr[i] += run;
        }
        
        return arr;
    }
};