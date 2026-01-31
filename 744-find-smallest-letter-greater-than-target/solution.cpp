#include <vector>

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, h = static_cast<int>(letters.size()) - 1;
        char v = letters[0];
        while (l <= h) {
            int m = l + (h - l) / 2;
            if (target < letters[m]) {
                v = letters[m];
                h--;
            } else {
                l++;
            }
        }
        return v;
    }
};
