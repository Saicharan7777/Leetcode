class Solution {
public:
   bool Vowel(char ch)
   {
    return  ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
   }
    int vowelStrings(vector<string>& words, int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++)
        {
            string v=words[i];
            if(Vowel(v[0])&&Vowel(v[v.size()-1]))c++;
        }
        return c;
    }
};