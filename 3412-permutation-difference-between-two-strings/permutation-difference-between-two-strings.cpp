class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int a[26];
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            a[s[i]-'a']=i;
        }

        int m=t.size(),c=0;
        for(int i=0;i<m;i++)
        {
           c+=abs(a[t[i]-'a']-i);
        }
        return c;
    }
};