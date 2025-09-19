class Solution {
public:
    string removeDuplicates(string s) {
        string v="";
        for(int i=0;i<s.size();i++)
        {
            if(!v.empty()&&s[i]==v.back())
            {
                v.pop_back();                
            }
            else
            {
                v.push_back(s[i]);
            }
        }
        return v;
    }
};