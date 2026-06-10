class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=1,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)c*=-1;
            else if(nums[i]==0)return 0;
            if(nums[i]>0)c*=1;
        }

        return c;
    }
};