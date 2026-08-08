class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> r;

        int n = strs.size();
        for(int i = 0; i < n; i++) {
           string value = strs[i];
           sort(value.begin(), value.end());
           r[value].push_back(strs[i]);
        }
        
        vector<vector<string>> ans;

        for(auto &i : r) {
            ans.push_back(i.second);
        }
        return ans;
    }
};