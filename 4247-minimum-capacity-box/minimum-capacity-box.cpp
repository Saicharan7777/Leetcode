class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int c=INT_MAX,v=-1;
        int n=capacity.size();
        for(int i=0;i<n;i++)
        {
            if(capacity[i]>=itemSize)
            {
                if(c>capacity[i])
                {
                    c=capacity[i];
                    v=i;
                }
            }
        }
        return v;
    }
};