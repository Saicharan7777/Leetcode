class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int m1=INT_MAX,m2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            m1=min(nums[i],m1);
            m2=max(nums[i],m2);
        }

        int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<m2&&nums[i]>m1)c++;
        }
        return c;

    }
};