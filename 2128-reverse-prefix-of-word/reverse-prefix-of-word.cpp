class Solution {
public:
    string reversePrefix(string word, char ch) {
        int c=-1;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                c=i;
                break;
            }
        }
        if(c==-1) return word;
        for(int i=0;i<=c/2;i++)
        {
            swap(word[i],word[c-i]);
        }
        return word;
    }
};