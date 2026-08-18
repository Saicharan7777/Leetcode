class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size(), max_area = 0;

        for(int i = 0; i <= n; i++) {
            int curr_height;
            if(i == n) {
                curr_height = 0;
            }
            else {
                curr_height = heights[i];
            }

            while(!st.empty() && curr_height < heights[st.top()]) {
                int h = heights[st.top()];
                st.pop();

                int w;
                if(st.empty()) {
                    w = i;
                }
                else {
                   w = i - st.top() - 1;
                }
                max_area = max(max_area, h * w);
            }
            st.push(i);
        }
        return max_area;
    }
};