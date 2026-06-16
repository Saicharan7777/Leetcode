class Solution {
public:
    string processStr(string s) {
        string r="";
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i]))
            {
                r+=s[i];
            }
            else if(s[i]=='*')
            {
               if(!r.empty())r.pop_back();
            }
            else if(s[i]=='#')
            {
                r+=r;
            }
            else if(s[i]=='%')
            {
                reverse(r.begin(),r.end());
            }
        }
        return r;   
    }
};