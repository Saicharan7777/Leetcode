class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left_index = 0, right_index = n - 1, current_water = 0, maximum_water = 0;
        while(left_index < right_index) {
            current_water = (right_index - left_index) * min(height[left_index], height[right_index]);
            maximum_water = max(current_water, maximum_water);
            if(height[left_index] < height[right_index]) {
                left_index++;
            }
            else {
                right_index--;
            }

        }
        return maximum_water;
    }
};