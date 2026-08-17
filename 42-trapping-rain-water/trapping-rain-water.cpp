class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;

        int n = height.size();
        int left_index = 0, right_index = n - 1;
        int left_max = height[left_index], right_max = height[right_index], total_water = 0;

        while(left_index < right_index) {
            if(left_max < right_max) {
                left_index++;
                left_max = max(left_max, height[left_index]);
                total_water += left_max - height[left_index];
            }
            else {
                right_index--;
                right_max = max(right_max, height[right_index]);
                total_water += right_max - height[right_index];
            }
        }

        return total_water;
    }
};