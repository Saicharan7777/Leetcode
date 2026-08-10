class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<vector<int>> result;
        for(int i = 0; i < n - 3; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            for(int j = i + 1; j < n - 2; j++) {
                if(j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }

                int left_index = j + 1, right_index = n - 1; 
                while(left_index < right_index) {
                    long long sum = (long long) nums[i] + nums[j] + nums[left_index] + nums[right_index];

                    if(sum > target) {
                        right_index--;
                    }
                    else if(sum < target) {
                        left_index++;
                    }
                    else {
                        result.push_back({nums[i], nums[j], nums[left_index], nums[right_index]});
                    while(left_index < right_index && nums[left_index] == nums[left_index + 1]) {
                        left_index++;
                    }

                    while(left_index < right_index && nums[right_index] == nums[right_index - 1]) {
                        right_index--;
                    }
                    left_index++, right_index--;
                    }
                }

            }
        }
        return result;
    }
};