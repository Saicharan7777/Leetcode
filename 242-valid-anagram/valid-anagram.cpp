class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();

        if(n != m) return false;
        vector<int> f(26);
        
        for(int i = 0; i < n; i++)
        {
            f[s[i] -'a']++;
        }

        for(int j = 0; j < m; j++)
        {
            if(f[t[j] - 'a'] != 0){
            f[t[j] - 'a']--;
            }
            else return false;
        }

        return true;
    }
};