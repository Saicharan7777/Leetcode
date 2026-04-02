class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        int n=s.size();
        map<char,int>c;
        int m=0;
        for(int i=0;i<n;i++)
        {
            c[s[i]]++;
             m=max(m,c[s[i]]);
        }

        for(int i=0;i<n;i++)
        {
            if(c[s[i]]==m)continue;
            else return false;
        }
        return true;
    }
};