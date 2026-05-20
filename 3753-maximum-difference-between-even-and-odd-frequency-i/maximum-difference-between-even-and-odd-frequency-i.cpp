class Solution {
public:
    int maxDifference(string s) {
        int n=s.size();
        int f[26]={0},v=n,g=0;
        for(int i=0;i<n;i++)
        {
            f[s[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(f[i]%2==0&&f[i]!=0)
            {
                v=min(v,f[i]);
            }
            else if(f[i]%2!=0&&f[i]!=0)
            {
                g=max(g,f[i]);
            }
        }
        return g-v;
        
    }
};