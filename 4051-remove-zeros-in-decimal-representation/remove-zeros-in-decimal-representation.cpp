class Solution {
public:
    long long removeZeros(long long n) {
        if(n<=9)return n;
        long long int b=1;
        long long c=0;
        while(n!=0)
        {
            int m=n%10;
            if(m>0)
            {
                c=m*b+c;
                b*=10;
            }
            n=n/10;
        }
        return c;
    }
};