class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size(),m=t.size();
        if(n!=m)return false;
        int r[26]={0};
        for(int i=0;i<n;i++)
        {
            r[s[i]-'a']++;
            r[t[i]-'a']--;
        }

        for(int j=0;j<26;j++)
        {
            if(r[j]!=0)return false;
        }
        return true;
    }
};