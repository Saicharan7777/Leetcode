class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.size(),m=spaces.size();
        string v(n+m,' ');
        int j=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(j<m&&i==spaces[j])
            {
                v[k++]=' ';
                j++;
            }
              v[k++]=s[i];
        }
        return v;
    }
};
