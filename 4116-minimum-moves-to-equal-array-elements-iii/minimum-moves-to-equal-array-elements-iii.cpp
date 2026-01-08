class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
             m=max(nums[i],m);
        }
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=(m-nums[i]);
        }
        return s;
    }
};