class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int n = words.size();
        vector<string> s;

        for(int i = 0; i < n; i++)
        {
            string v = "", b = words[i];
            int m = b.size();
            for(int i = 0; i < m; i++)
            {
                if(b[i] == separator)
                {
                    if(!v.empty())
                    {
                     s.push_back(v);
                     v = "";
                    }
                }
                else 
                {
                    v += b[i];
                }
            }
            if(!v.empty()) s.push_back(v);

        }
        return s;
    }
};