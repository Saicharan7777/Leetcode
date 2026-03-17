class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        int n=details.size();
        for(int i=0;i<n;i++)
        {
            string v=details[i];
            int m=(int)((v[v.size()-4]-'0')*10+v[v.size()-3]-'0');
            if(m>60)c++;
        }        
        return c;
    }
};