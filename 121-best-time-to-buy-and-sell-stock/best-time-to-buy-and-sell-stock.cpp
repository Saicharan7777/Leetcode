class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int m = prices[0], v = 0;

        for(int i : prices)
        {
            if(m > i)
            {
                m = i;
            }
            v = max(v, i - m);
        }
        return v;
    }
};