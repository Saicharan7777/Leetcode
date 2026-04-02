/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0,h=letters.size()-1;
        char v=letters[0];
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(target<letters[m])
            {
                v=letters[m];
                h--;
            }
            else
            {
                l++;
            }
        }
        return v;
    }
};
// @lc code=end

