class Solution {
public:
    int maxDepth(string s) {
        int c=0,m=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('){
                c++;
                m=max(c,m);
            }
            else if(s[i]==')'){
               c--;
            }
        }
        return m;
    }
};