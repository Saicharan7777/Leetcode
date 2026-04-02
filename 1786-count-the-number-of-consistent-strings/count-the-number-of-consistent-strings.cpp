class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> r;
        for(int i=0;i<allowed.size();i++)
        {
            r[allowed[i]]++;
        }
        string s="";
        int sum=0;
        for(int i=0;i<words.size();i++)
        {
            int c=0;
            s=words[i];
            for(int j=0;j<s.size();j++)
            {
                if(r.count(s[j])>=1)c++;
            }
            if(c==s.size())sum++;
        }
        return sum;
    }
};