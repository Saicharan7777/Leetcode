class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> r;

        for(int i : asteroids) {
            if(i > 0) {
                r.push_back(i);
            }
            else {
                while(!r.empty() && r.back() > 0 && r.back() < -i) {
                    r.pop_back();
                }
                if(!r.empty() && r.back() == -i) {
                    r.pop_back();
                }
                else if(r.empty() || r.back() < 0) {
                    r.push_back(i);
                }
            }
        }
        return r;
    }
};