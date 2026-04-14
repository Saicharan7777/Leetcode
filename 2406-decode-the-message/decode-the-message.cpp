class Solution {
public:
    string decodeMessage(string key, string message) {

        char f[26];
        int n=key.size();
        int m=message.size();
        string v;
        int k='a';
        for(int i=0;i<n;i++)
        {
            if(key[i]!=' '&&f[key[i]-'a']==0)
            {
                f[key[i]-'a']=k;
                k++;
            }
        }

        for(int i=0;i<m;i++)
        {
            if(isalpha(message[i]))
            {
                message[i]=f[message[i]-'a'];
            }
        }

        return message;
        
    }
};