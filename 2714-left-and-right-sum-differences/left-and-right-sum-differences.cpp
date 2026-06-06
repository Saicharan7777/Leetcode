class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size(),s=0,m=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
        int v=0,g=0;
        for(int j=0;j<n;j++)
        {
            int v=nums[j];
            m+=v;
            nums[j]=abs(s-m);
            s-=v;
        }
        return nums;
    }
};