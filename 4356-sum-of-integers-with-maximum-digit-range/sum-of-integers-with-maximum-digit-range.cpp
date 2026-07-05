class Solution {
public:
    int Digit_Finding(int num)
    {
        int v = num;
        int min1 = 9, max1 = 0;
        while(v != 0)
        {
            min1 = min(min1, v % 10);
            max1 = max(max1, v % 10);
            v /= 10;
        }
        return max1 - min1;
    }
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size(), sum = 0, freq = -1;
        
        for(int i = 0; i < n; i++)
        {
            int val = Digit_Finding(nums[i]);
            
            if(val > freq)
            {
                freq = val;
                sum = nums[i];
            }
            else if(val == freq)
            {
                sum += nums[i];
            }
        }
        return sum;
    }
};