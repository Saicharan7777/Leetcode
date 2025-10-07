class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>r;
        r.push_back(0);
        for(int i=1;i<=n;i++)
        {
            int num=i;
            int c=1;
            while(num!=1)
            {
            if(num%2!=0)c++;
              num=num/2;
            }
            r.push_back(c);
        }
        return r;
    }
};
