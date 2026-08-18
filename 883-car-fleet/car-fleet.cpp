class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int, double> a;
        int n = position.size();
        for(int i = 0; i < n; i++) {
            a[position[i]] = (double)(target - position[i]) / speed[i];
        }

        int fleets = 0;
        double max_time = 0.0;

        for(auto i = a.rbegin(); i != a.rend(); i++) {
            if(i->second > max_time) {
                fleets++;
                max_time = i->second;
            }
        }
        return fleets;
    }
};