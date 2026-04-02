class Solution {
public:
    bool isSubsequence(string s, string t) {
        int c=0,j=0,i=0;
        while(i<s.size()&&j<t.size())
        {
            if(s[i]==t[j]){
                c++;
                i++;
            }
            j++;
        }
        if(c==s.size())return true;
        else return false;
    }
};