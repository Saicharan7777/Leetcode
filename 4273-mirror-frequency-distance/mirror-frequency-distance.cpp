class Solution {
public:
    int mirrorFrequency(string s) {
        int n=s.size();
        unordered_map<int,int>r;
        for(int i=0;i<n;i++)
        {
            r[s[i]]++;
        }

        int sum=0;
        for(int i=0;i<n;i++)
        {
            char m;
            if(r[s[i]]>0)
            {
              if(isalpha(s[i]))
              {
                m='a'+'z'-s[i];
              }
              else
              {
                m='0'+'9'-s[i];
              }
              sum+=abs(r[s[i]]-r[m]);
              r[s[i]]=0;
              r[m]=0;
            }
        }
        return sum;


    }
};