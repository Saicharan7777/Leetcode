class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int, int>> a(n);

        for(int i = 0; i < n; i++) {
            a[i] = {position[i], speed[i]};
        }

        sort(a.rbegin(), a.rend());
        int fleets = 0;
        double max_time = 0.0;

        for(int i = 0; i < n; i++) {
            double time = (double)(target - a[i].first) / a[i].second;

            if(time > max_time) {
                fleets++;
                max_time = time;
            }
        }
        return fleets;
    }
};