class Solution {
public:
    bool isValid(string s) {
        int t = -1;
        for(char i : s) {
            if(i == '(' || i == '[' || i == '{'){
                s[++t] = i;
            }
            else if(t >= 0) {
                char v = s[t--];
                if(i == ')' && v != '(' || i == '}' && v != '{' || i == ']' && v != '[') {
                    return false;
                }
            }
            else {
                return false;
            }
        }
        return t == -1;
    }
};