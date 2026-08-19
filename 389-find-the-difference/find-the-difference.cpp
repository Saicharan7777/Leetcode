class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch = 0;

        for(char i : s) {
            ch ^= i;
        }

        for(char i : t) {
            ch ^= i;
        }
        return  ch;
    }
};