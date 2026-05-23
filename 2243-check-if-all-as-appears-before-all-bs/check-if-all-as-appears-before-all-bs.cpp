class Solution {
public:
    bool checkString(string s) {
        int n=s.size(),v=-1;
        for(int i=0;i<n;i++)
        {
            if(v!=-1&&s[i]=='a')return false;
            else if(s[i]=='b'&&v==-1)
            {
                v=i;
            }
        }

        return true;
    }
}; 