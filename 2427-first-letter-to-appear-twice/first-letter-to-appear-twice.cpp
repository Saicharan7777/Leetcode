class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.size();
        map<char,int>r;
        char v;
        for(int i=0;i<n;i++)
        {
           r[s[i]]++;
           if(r[s[i]]>1){
            v=s[i];
            break;
            }
        }
        return v;
    }
};