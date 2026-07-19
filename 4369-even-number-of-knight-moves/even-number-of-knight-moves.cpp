class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int x = (start[0] + start[1]) % 2;
        int y = (target[0] + target[1]) % 2;

        return x == y;
    }
};