class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n = s.size(), c = 0, v = 0;
        string str = "";
        for(int i = 0; i < n; i++) {
            if(s[i] == y) str += y;
        }
        for(int i = 0; i < n; i++) {
            if(s[i] != y) str += s[i];
        }
        return str;
    }
};