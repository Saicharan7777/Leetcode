class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> result;
        vector<int> index (n, 0);
        
        for(int i = 0; i < n; i++) {
            while(!result.empty() && temperatures[i] > temperatures[result.top()]) {
                int value = result.top();
                result.pop();
                index[value] = i - value;
            }
            result.push(i);
        }
        return index;
    }
};