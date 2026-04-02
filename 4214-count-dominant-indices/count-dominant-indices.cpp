class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)s+=nums[i];
        
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            s-=nums[i];
            if(nums[i]>(s/(n-1-i)))c++;
        }
        return c;
    }
};