class Solution {
public:
    string sortSentence(string s) {
        int n=s.size();

        string v;
        vector<string>r(10);
        for(int i=0;i<n;i++)
        {
            if(isalpha(s[i]))
            {
                v+=s[i];
            }
            else if(isdigit(s[i]))
            {
               r[s[i]-'0']=v;
               v="";
            }
        }

        for(int i=1;i<10;i++)
        {
            if(r[i]!=""){
                if(!v.empty())v+=' ';
                v+=r[i];
            }
            else
            {
                break;
            }
        }
        return v;
    }
};