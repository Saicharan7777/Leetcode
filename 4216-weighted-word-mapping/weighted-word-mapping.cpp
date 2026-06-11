class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string v="";
        v.reserve(words.size());
        for(int i=0;i<n;i++)
        {
            string g=words[i];
            int j=0,c=0;
            while(j<g.size())
            {
                c+=weights[g[j]-'a'];
                j++;
            }
            c='z'-(c%26);
            v+=(char)c;
        }
        return v;
    }
};