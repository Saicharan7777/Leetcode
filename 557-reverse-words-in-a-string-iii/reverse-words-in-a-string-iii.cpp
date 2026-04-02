class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();

        string v="",g="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
               g+=s[i]; 
            }
            else
            {
                reverse(g.begin(),g.end());
                v+=g+' ';
                g="";
            }
        }

         reverse(g.begin(),g.end());
                v+=g;
                g="";
        return v;
    }
};