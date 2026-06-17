class Solution {
public:
    bool Vowel(char z)
    {
        return z=='a'||z=='e'||z=='i'||z=='o'||z=='u';
    }
    bool doesAliceWin(string s) {
        int n=s.size(),c=0;
        for(int i=0;i<n;i++)
        {
            if(Vowel(s[i]))c++;
        }
        return c>=1;
    }
};