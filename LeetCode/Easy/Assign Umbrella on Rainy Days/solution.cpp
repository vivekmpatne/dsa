class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        vector<string> ans(n, "None");
        int a_cnt = 0, b_cnt = 0;

        for(int i = 0; i<n; i++){
            bool a_needs = ( i < n - 1 && rain[i] == 1 && rain[i+1] == 1 );
            bool b_needs = ( rain[i] == 1);

            if(a_needs && b_needs){
                if( a_cnt <= b_cnt){
                    ans[i] = "Alice";
                    a_cnt++;
                }
                else{
                    ans[i] = "Bob";
                    b_cnt++;
                }
            }
            else if( b_needs ){
                ans[i] = "Bob";
                b_cnt++;
            }
        }
        return ans;
    }
};