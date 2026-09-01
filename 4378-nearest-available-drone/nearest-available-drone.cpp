class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n = drones.size(), dist = INT_MAX, index = -1;

        for(int i = 0; i < n; i++) {
            int sum = abs(target[0] - drones[i][0]) + abs(target[1] - drones[i][1]);

            if(sum <= drones[i][2] && dist > sum) {
                dist = sum;
                index = i;
            }
        }

        return index;
    }
};