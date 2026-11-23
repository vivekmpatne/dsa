class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int proFit = 0;
        int buy = prices[0];

        for(int i = 1; i<n; i++){
            if( prices[i] < buy ){
                buy = prices[i];
            }
            else if( prices[i] - buy > proFit){
                proFit = prices[i] - buy;
            }
        }
        
        return proFit;
    }
};