class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
        map<int,int>r;
        for(int i=0;i<n;i++)
        {
            r[bulbs[i]]++;
        }

        vector<int>b;
        for(int i=0;i<n;i++)
        {
            if(r[bulbs[i]]%2==1){b.push_back(bulbs[i]);
            r[bulbs[i]]=0;
            }
        }
        sort(b.begin(),b.end());
        return b;
    }
};