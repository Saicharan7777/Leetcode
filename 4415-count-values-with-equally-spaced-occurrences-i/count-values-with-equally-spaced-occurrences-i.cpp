class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<vector<int>> values(101);

        int n = nums.size(); 
        for(int i = 0; i < n; i++) {
            values[nums[i]].push_back(i);
        }

        int count = 0;
        for(int i = 1; i < 101; i++) {
            if(values[i].size() == 3) {
                int a = values[i][0];
                int b = values[i][1];
                int c = values[i][2];

                if(b - a == c - b) {
                    count++;
                }
            }
        }

        return count;
    }
};