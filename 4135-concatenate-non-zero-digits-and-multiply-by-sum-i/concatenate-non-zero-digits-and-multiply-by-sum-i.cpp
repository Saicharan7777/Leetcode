class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0, mul = 0;
        string v = to_string(n);
        int m = v.size();

        for(int i = 0; i < m; i++)
        {
            if(v[i] != '0')
            {
              mul = mul * 10 + (v[i] - '0');
              sum += (v[i] - '0');
            }

        }
        return mul * sum;
    }
};