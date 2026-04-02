class Solution {
public:
    string largestEven(string s) {
        bool flag=false;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                s.erase(i,1);
                flag=true;
            }
            else
            {
                break;
            }
        }
        if(!s.empty())return s; 
        else return "";
    }
};