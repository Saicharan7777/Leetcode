class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if(n > m) return false;
        vector<int> first_string(26), second_string(26);
        for(int i = 0; i < n; i++) {
            first_string[s1[i] - 'a']++;
            second_string[s2[i] - 'a']++;
        }

        if(first_string == second_string) return true;

        for(int i = n; i < m; i++) {
            second_string[s2[i] - 'a']++;
            second_string[s2[i - n] - 'a']--;
            if(first_string == second_string) return true;
        }
        return false;
    }
};