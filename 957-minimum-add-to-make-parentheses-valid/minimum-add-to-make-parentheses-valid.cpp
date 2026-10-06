class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int actual_count1 = 0, required_count = 0;

        for(char i : s) {
            if(i == '(') {
                actual_count1++;
            }
            else {
                if(actual_count1 > 0)actual_count1--;
                else required_count++;
            }
        }

        
        return  actual_count1 + required_count;
    }
};