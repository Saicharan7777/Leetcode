class Solution {
public:
    string removeTrailingZeros(string num) {
        int i=num.size()-1;
        while(i>=0&&num[i]=='0')
        {
            i--;
        }
        num.resize(i+1);
        
        return num;
    }
};