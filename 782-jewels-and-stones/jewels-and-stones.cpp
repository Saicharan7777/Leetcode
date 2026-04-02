class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=stones.size();
        int m=jewels.size();
        int c=0;
        map<char,int>r;
        for(int i=0;i<m;i++)
        {
            r[jewels[i]]++;
        }

        for(int i=0;i<n;i++)
        {
            if(r.count(stones[i])==1)c++;
        }
        return c;
    }
};