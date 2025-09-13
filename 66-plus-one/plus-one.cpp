class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> v;
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (digits[i] == 9)
                c++;
        }
        if (c == n) {
            v.push_back(1);
            for (int i = 0; i < n; i++)
                v.push_back(0); 

        return v;
        }
        int carry = 0;
        digits[n-1] +=1;
        for(int i=n-1;i>=1;i--)
        {
            carry = digits[i]/10;
            digits[i]%=10;
            digits[i-1] += carry;
        }
        return digits;
    }
};
