class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int> a;

        for (int i = 2; i <= 9; i++) {
            for (int j = 1; j <= 10 - i; j++) {

                int n = 0;

                for (int k = j; k < i + j; k++) {
                    n = n * 10 + k;
                }

                if (n >= low && n <= high) a.push_back(n);
            }
        }
        return a;
    }
};