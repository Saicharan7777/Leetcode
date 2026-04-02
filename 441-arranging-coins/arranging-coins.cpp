class Solution {
public:
    int arrangeCoins(int n) {
        int v=n;
        int c=0;
        while(v>=c+1)
        {
            c++;
            v-=c;
            
        }
        return c;
    }
};