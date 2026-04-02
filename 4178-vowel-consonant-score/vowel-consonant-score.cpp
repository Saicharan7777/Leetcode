class Solution {
public:
    int vowelConsonantScore(string s) {
        int c=0,v=0;

        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u')
            {
                c++;
            }
            else if(s[i]>='a'&&s[i]<='z')v++;
        }
        if(c==0||v==0)return 0;
        return c/v;
    }
};