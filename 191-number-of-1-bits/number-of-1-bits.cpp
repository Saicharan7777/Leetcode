class Solution {
public:
    int hammingWeight(int n) {
        int c=1;
        while(n!=1)
        {
            if(n%2!=0)c++;
            n=n/2;
        }
        return c;
    }
};