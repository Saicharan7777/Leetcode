class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size(),v=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                v=min(v,abs(i-start)); 
            }
        }
        return v;
    }
};