class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size(), sum = 0;
        for(int i = 0; i < n; i++) {
            int v = (123 - (int (s[i])));
            sum += (i + 1) * v;
        }
        return sum;
    }
};