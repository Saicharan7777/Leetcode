class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>s;
        int n=words.size(),c=0;
        for(int i=0;i<n;i++)
        {
            string b=words[i];
            reverse(b.begin(),b.end());
            if(s.count(b))c++;
            else s.insert(words[i]);
        }
        return c;
    }
};