class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        string v="";
        for(int i=0;i<n;i++)
        {
            if(!v.empty()&&abs(s[i]-v.back())==32)
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