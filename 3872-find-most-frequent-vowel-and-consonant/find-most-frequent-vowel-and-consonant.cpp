class Solution {
public:
    bool c(char ch)
    {
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    int maxFreqSum(string s) {
        int n=s.size();
        map<char,int>r;
        for(int i=0;i<n;i++)
        {
           r[s[i]]++;
        }
        
        int c1=0,v=0;
        for(int i=0;i<n;i++)
        {
            if(c(s[i])) c1=max(c1,r[s[i]]);
            else v=max(v,r[s[i]]);
        }
        return c1+v;
    }
};