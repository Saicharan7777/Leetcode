class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int m = prices[0], v = 0;

        for(int i = 0; i < n; i++)
        {
            if(m > prices[i])
            {
                m = prices[i];
            }
            v = max(v, prices[i] - m);
        }
        return v;
    }
};