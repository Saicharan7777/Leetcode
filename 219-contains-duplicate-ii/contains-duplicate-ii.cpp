class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> arr;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(i > k) {
                arr.erase(nums[i - k - 1]);
            }
            if(arr.count(nums[i])) {
                return true;
            }
            arr.insert(nums[i]);
        }
        return false;
    }
};