class Solution {
public:
    int heightChecker(vector<int>& heigh) {
        vector<int> exp = heigh;
        sort(exp.begin(), exp.end());
        int n = heigh.size();
        int cnt = 0;

        for(int i=0; i<n; i++){
            if ( heigh[i] != exp[i]){
                cnt++;
            }
        }

        return cnt;
    }
};