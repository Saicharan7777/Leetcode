class Solution {
public:
    bool consecutiveSetBits(int n) {
        int v=n,c=0;
        v=n&(n>>1);
        while(v)
        {
            c+=v&1;
            if(c>1)return false;
            v>>=1;
        }
        return c==1;
    }
};