class Solution {
public:
    string truncateSentence(string s, int k) {
     int n=s.size(),c=0;
     for(int i=0;i<n;i++)
     {
        if(s[i]==' ')c++;
        if(c==k)return s.substr(0,i);
     }   
     return s;
    }
};