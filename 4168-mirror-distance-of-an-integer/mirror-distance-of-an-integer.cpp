class Solution {
public:
    int mirrorDistance(int n) {
        if(n==10)return n-1;
        if(n<=9)return 0;
        int s=n,v=0,m=0;
        while(s!=0)
        {
            v=v*10+(s%10);
            s=s/10;
        }
        return abs(v-n);
    }
};