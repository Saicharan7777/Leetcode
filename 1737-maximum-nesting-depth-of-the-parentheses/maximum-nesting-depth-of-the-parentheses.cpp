class Solution {
public:
    int maxDepth(string s) {
        int count = 0, f = 0, n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                f++;
                count = max(count, f);
            }
            else if(s[i] == ')'){
                f--;
            }
        }
        return count;
    }
};