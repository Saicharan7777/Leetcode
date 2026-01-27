class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        int c=0,l=0,h=nums.size()-1;
        while(l<=h)
        {
            if(nums[l]+nums[h]<target)
            {
                c+=(h-l);
                l++;
            }
            else
            {
                h--;
            }
        }
        return c;
    }
};