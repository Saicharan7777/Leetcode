class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, max_length = 0, n = s.size();
        unordered_set<char> set;
        for(int i = 0; i < n; i++) {

            while(set.count(s[i])) {
                set.erase(s[left]);
                left++;
            }

            set.insert(s[i]);
            max_length = max(max_length, i - left + 1);
        }

        return max_length;
    }
};