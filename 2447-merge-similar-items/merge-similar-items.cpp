class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int m=items1.size(),n=items2.size();
        int r[1001]={0};
        for(int i=0;i<m;i++)
        {
            r[items1[i][0]]+=items1[i][1];
        }
         for(int i=0;i<n;i++)
        {
            r[items2[i][0]]+=items2[i][1];
        }

        vector<vector<int>>a;
        for(int i=1;i<=1000;i++)
        {
            if(r[i]!=0)a.push_back({i,r[i]});
        }
        return a;
    }
};