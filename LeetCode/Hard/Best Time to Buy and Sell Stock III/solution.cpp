class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b1 = INT_MIN, b2 = INT_MIN;
        int s1 = 0, s2 = 0;

        for(int num : prices){
            b1 = max(b1, -num);
            s1 = max(s1, b1 + num);

            b2 = max(b2, s1 - num);
            s2 = max(s2, b2 + num);
        }
        return s2;
    }
};