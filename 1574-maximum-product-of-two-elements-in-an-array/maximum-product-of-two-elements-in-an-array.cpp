class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                s=max(s,(nums[i]-1)*(nums[j]-1));
            }
        }
        return s;
    }
};