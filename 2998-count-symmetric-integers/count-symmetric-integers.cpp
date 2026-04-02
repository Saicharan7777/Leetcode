class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
       int c=0;
        for(int i=low;i<=high;i++)
        {
            int s=0,v=0;
            string b=to_string(i);
            if(b.size()%2!=0)continue;
            for(int j=0;j<b.size()/2;j++)
            {
                s+=b[j]-'0';
                v+=b[b.size()-j-1]-'0';
            }
            if(s==v)c++;
        }
        return c;
    }
};