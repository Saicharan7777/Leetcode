class Solution {
public:
    bool Finding_Palindrome(string &s, int left_index, int right_index) {
        int n = s.size();
        while(left_index < right_index) {
            if(s[left_index] != s[right_index]) {
                return false;
            }
            left_index++, right_index--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int left_index = 0, right_index = n - 1;
        while(left_index < right_index) {
            if(s[left_index] != s[right_index]) {
                return Finding_Palindrome(s, left_index + 1, right_index) || Finding_Palindrome(s, left_index, right_index - 1);
            }
            else {
                left_index++, right_index--;
            }
        }
        return true;
    }
};