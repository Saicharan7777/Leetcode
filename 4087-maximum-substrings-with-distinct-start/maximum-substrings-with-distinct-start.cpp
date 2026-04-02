class Solution {
public:
    int maxDistinct(string s) {
        int c[26]={0};
        int n=s.size();
        int m=0;
        for(int i=0;i<n;i++)
        {
            if(c[s[i]-'a']==0)
            {
                m++;
                c[s[i]-'a']=1;
            }
        }
        return m;
    }
};