class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        int n = strs.size(), m = strs[0].size();
    
        for(int i = 0; i < m; i++)
        {
            char v = strs[0][i];
            for(int j = 1; j < n; j++)
            {
                if(i == strs[j].size() || strs[j][i] != v)
                {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};