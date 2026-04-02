class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double v=INT_MAX;
        for(int i=0;i<nums.size()/2;i++)
        {
            if((nums[i]+nums[nums.size()-i-1])/2.0<v)
            {
                v=(nums[i]+nums[nums.size()-i-1])/2.0;
            }
        }
        return v;
    }
};