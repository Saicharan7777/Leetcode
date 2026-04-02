class Solution {
public:
    int pivotInteger(int n) {
        int s=0;
        for(int j=1;j<=n;j++)
        {
            s+=j;
        }
        int v=0;
        for(int i=1;i<=n;i++)
        {
            
            s-=i;
            if(v==s)return i;
            v+=i;
        }
        return -1;
    }
};