class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int f[26]={0};
        int n=text.size(),m=brokenLetters.size();

        for(int i=0;i<m;i++)
        {
            f[brokenLetters[i]-'a']=1;
        }

       bool b=true;
       int c=0,v=1;
        for(int i=0;i<n;i++)
        {

            if(text[i]==' ')
            {
                b=true;
                v++;
            }
           else if(f[text[i]-'a']==1&&b==true)
            {  
                c++;
               b=false;
            }
        }
        return v-c;
    }
};