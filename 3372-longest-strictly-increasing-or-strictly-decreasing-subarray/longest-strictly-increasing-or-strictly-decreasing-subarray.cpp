class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;
        int max1 = 1, min1 = 1, size = 0;

        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[i - 1]) {
                max1++;
                min1 = 1;
            }
            else if(nums[i] < nums[i - 1]) {
                min1++;
                max1 = 1;
            }
            else {
                max1 = 1;
                min1 = 1;
            }
            size = max(size, max(max1, min1));
        }

        return size;
    }
};