class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[0])return 1;
        }
        return c;
        
    }
};