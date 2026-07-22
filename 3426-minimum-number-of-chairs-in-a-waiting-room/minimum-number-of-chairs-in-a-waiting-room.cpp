class Solution {
public:
    int minimumChairs(string s) {
        int n = s.size();

        int c = 0, v = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'E')
            {
                c++;
                v = max(v, c);
                
            }
            else if(s[i] == 'L')
            {
                c--;
            }
        }

        return v;
    }
};