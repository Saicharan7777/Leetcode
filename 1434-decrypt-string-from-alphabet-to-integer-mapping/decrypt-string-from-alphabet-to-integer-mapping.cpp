class Solution {
public:
    string freqAlphabets(string s) {
        int n=s.size();
        string v="";
        for(int i=0;i<n;i++)
        {
            if(i+2<n&&s[i+2]=='#')
            {
                int sum=(s[i]-'0')*10+(s[i+1]-'0');
                v+='a'+sum-1;
                i+=2;
            }
            else
            {
                v+='a'+(s[i]-'0')-1;
            }
        }
        return v;
    }
};