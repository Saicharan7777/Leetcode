class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();

        long long m1 = 0, m2 = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                m1 = gcd(nums[i], nums[j]);
                m2 = max(m2, 1LL * nums[i] * nums[j] / (m1 * m1));
            }
        }

        return m2;
    }
};