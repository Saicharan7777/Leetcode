class Solution {
public:
    int maxProduct(int n) {
        int v = n, m1 = 0, m2 = 0;
        while(v != 0)
        {
            int re = v % 10;

            if(re > m1)
            {
                m2 = m1;
                m1 = re;
            }
            else if(re > m2)
            {
                m2 = re;
            }
            v /= 10;
        }

        return m1 * m2;
    }
};