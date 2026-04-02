class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int c=0,v=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>=nums[i+1])
            {
                v++;
            }
            if(nums[i]<=nums[i+1])
            {
                c++;
            }
        }
        if(c==n-1||v==n-1)return true;
       else return false;
    }
};