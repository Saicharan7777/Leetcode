class Solution {
public:
    int smallestNumber(int n, int t) {
        int v = n;
        for(v = n; v <= 100; v++)
        {
            int g = v, p = 1;
            while(g != 0)
            {
                p *= g % 10;
                g /= 10;
            }
            if(p % t == 0) return v;
        }
        return 0;
    }
};