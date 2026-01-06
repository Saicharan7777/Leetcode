class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        int v=n*(n+1)/2;
        return v-s;
    }
};