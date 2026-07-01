class Solution {
public:
    int countAsterisks(string s) {
        int n = s.size(), v = 0, c = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '|') c = 1 - c;
            else if(s[i] == '*' && c == 0)
            {
                v++;
            }
        }
        return v;
    }
};