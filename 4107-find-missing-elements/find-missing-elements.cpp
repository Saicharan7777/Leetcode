class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int r[101]={0};

        vector<int>m;
        int m1=0,m2=101;
        for(int i=0;i<n;i++)
        {
            r[nums[i]]++;
            m1=max(m1,nums[i]);
            m2=min(m2,nums[i]);
        }
        
        for(int i=m2;i<=m1;i++)
        {
            if(r[i]==0)m.push_back(i);
        }
        return m;
    }
};