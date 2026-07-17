class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> a(1001);

        for(int i = 0; i < n; i++)
        {
            int m = nums[i].size();
            for(int j = 0; j < m; j++)
            {
                a[nums[i][j]]++;
            }
        }

        vector<int> b;
        for(int i = 0; i < 1001; i++)
        {
            if(a[i] == n) b.push_back(i);
        }

        return b;
    }
};