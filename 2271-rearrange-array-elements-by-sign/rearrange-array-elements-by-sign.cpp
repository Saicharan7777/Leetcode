class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>r(n);
        int a=0,b=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                r[a]=nums[i];
                a+=2;
            }
            else
            {
                r[b]=nums[i];
                b+=2;
            }
        }   
        return r;
    }
};