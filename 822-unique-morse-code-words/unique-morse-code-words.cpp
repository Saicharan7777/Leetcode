class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> r={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string>m;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            string v=words[i],b="";

            int j=0;
            while(j<v.size())
            {
                b+=r[v[j]-'a'];
                j++;
            }
            m.insert(b);
        }
        return m.size();
    }
};