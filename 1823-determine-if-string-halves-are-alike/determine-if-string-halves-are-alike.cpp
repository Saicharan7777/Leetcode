class Solution {
    bool vowel(char ch)
    {
        return ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U';
    }
public:
    bool halvesAreAlike(string s) {

        int n=s.size(),c=0,v=0;


        for(int i=0;i<n/2;i++)
        {
            if(vowel(s[i]))c++;
            if(vowel(s[n-i-1]))v++;
        }
        return c==v;
    }
};