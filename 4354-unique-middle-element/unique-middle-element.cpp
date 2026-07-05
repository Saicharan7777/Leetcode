class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int m = nums[n / 2], c = 0;
        for(int i = 0; i < n; i++)
            {
               if(nums[i] == m) c++;
            }
        if(c == 1) return true;
        else return false;
    }
};