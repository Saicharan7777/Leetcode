class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size(),c=0;

        for(int i=0;i<n;i++)
        {
            int v=nums[i];
            if(nums[i]<=9&&nums[i]==digit)c++;
            else
            {
                while(v!=0)
                {
                    if(v%10==digit)c++;
                    v/=10;
                }
            }
        }
        return c;
    }
};