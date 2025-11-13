class Solution {
public:
    int pivotInteger(int n) {
        int s=0;
        for(int i=1;i<=n;i++)
        {
            s+=i;
        }

        int v=0,v1=-1;
        for(int i=1;i<=n;i++)
        {
            v+=i;
            if(v==(s-v)+i
            )v1=i;
        }
        return v1;
    }
};