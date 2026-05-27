class Solution {
public:
    int getLucky(string s, int k) {
        int n=s.size();
        string v="";
        for(int i=0;i<n;i++)
        {
            v+=to_string(s[i]-'a'+1);
        }

        while(k--)
        {
            int sum=0;
            for(int i=0;i<v.size();i++)
            {
                sum+=v[i]-'0';
            }
            v=to_string(sum);
        }
        return stoi(v);
    }
};