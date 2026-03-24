class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>r,k;
        int n=words1.size();
        int m=words2.size();
        for(int i=0;i<n;i++)
        {
            r[words1[i]]++;
        }
        for(int j=0;j<m;j++)
        {
           k[words2[j]]++;
        }

        int c=0;
        for(int i=0;i<m;i++)
        {
           if(r[words2[i]]==1&&k[words2[i]]==1){
                c++;
            }
        }
        return c;
    }
};