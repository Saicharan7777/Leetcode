class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n = s.size(), c = 0, v = 0;
        for(int i = 0; i < n; i++)
            {
                if(s[i] == x)c++;
                else if(s[i] == y)v++;
            }

        if(c == 0 || v == 0) return s;

        int i = 0, j = n - 1;
        while(i < j)
            {
                if (s[i] == x && s[j] == y)
                {
                    swap(s[i], s[j]);
                    i++, j--;
                }
                else if(s[i] != x) i++;
                else if(s[j] != y) j--;
            }

        return s;
    }
};