class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int m=word1.size();int n=word2.size();
        s.reserve(m + n);
        int i=0,j=0;
        while(i<m||j<n)
        {
            if(i<m)s+=word1[i++];
            if(j<n)s+=word2[j++];
        }
        return s;
    }
};