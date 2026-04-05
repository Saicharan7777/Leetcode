class Solution {
public:
    int mirrorFrequency(string s) {
        int n=s.size();
        int r[128]={0};
        for(int i=0;i<n;i++)
        {
            r[s[i]]++;
        }

        int sum=0;
        for(char i='a';i<='z';i++) {
            char m='a'+'z'-i;
            if(r[i]>0||r[i]>0){
                sum+=abs(r[i]-r[m]);
                r[i]=0;
                r[m]=0;
            }
        }

        for(char i='0';i<='9';i++) {
            char m='0'+'9'-i;
            if(r[i]>0||r[m]>0){
                sum+=abs(r[i]-r[m]);
                r[i]=0;
                r[m]=0;
            }
        }
        return sum;


    }
};