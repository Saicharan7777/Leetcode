class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        vector<string>v;
       unordered_map<string,int> r;
       string b;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=' ')
            {
                b+=s1[i];
            }
            else
            {
                r[b]++;
                b="";
            }
        }
        if(b!="")r[b]++;
        b="";
        for(int i=0;i<m;i++)
        {
            if(s2[i]!=' ')
            {
                b+=s2[i];
            }
            else
            {
                r[b]++;
                b="";
            }
        }
         if(b!="")r[b]++;

       for(auto i=r.begin();i!=r.end();i++)
       {
          if(i->second==1)v.push_back(i->first);
       }
       return v;
    }
};