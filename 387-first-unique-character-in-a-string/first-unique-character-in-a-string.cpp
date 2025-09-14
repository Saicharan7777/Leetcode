class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>dict;
        for(int i=0;i<s.size();i++)
        {
            dict[s[i]]++;
        }
        for(int j=0;j<s.size();j++)
        {
            if(dict[s[j]]==1)
            {
                return j;
            }
        }
        return -1;
        
    }
};