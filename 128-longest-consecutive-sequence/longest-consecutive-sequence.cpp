class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for(int i : nums) {
            s.insert(i);
        }

        int maximum_count = 0;
        for(int i : s) {
            if(s.find(i - 1) == s.end())
            {
                int current_number = i, count = 1;
                while(s.find(current_number + 1) != s.end()) {
                    current_number++;
                    count++;
                }
                maximum_count = max(maximum_count, count);
            }
        }

        return maximum_count;
    }
};