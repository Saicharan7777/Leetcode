class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return false;
        int i=0;
        int c=0;

        bool a=false,b=false,d=false;
        while(i+1<n&&nums[i]<nums[i+1])
        {
            i++;
            c++;
            a=true;
        }
        while(i+1<n-1&&nums[i]>nums[i+1])
        {
            i++;
            c++;
            b=true;
        }

        while(i+1<n&&nums[i]<nums[i+1])
        {
            i++;
            c++;
            d=true;
        }
        return a&&b&&d&&c==n-1;
    }
};