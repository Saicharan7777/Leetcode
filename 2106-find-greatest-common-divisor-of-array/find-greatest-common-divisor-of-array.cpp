class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size(), m1 = nums[0], m2 = nums[0];
        for(int i = 0; i < n; i++)
        {
            m1 = max(nums[i], m1);
            m2 = min(nums[i], m2);
        }

        while(m2 != 0)
        {
            int t = m2;
            m2 = m1 % m2;
            m1 = t;
        }
        return m1;
    }
};