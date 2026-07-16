class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n = batteryPercentages.size(), c = 0;

        for (int i = 0; i < n; i++) 
        {
            if (batteryPercentages[i] - c > 0) 
            {
                c++;
            }
        }

        return c;
    }
};