class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> z;
        int n=nums.size(),s=0,m=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
        int v=0,g=0;
        for(int j=0;j<n;j++)
        {
            m+=nums[j];
            z.push_back(abs(s-m));
            s-=nums[j];
        }
        return z;
    }
};