class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            s=max(s,nums[i]);
        }

        int c=0,v=0;
        while(c<k)
        {
            v+=s;
            s=s+1;
            c++;
        }
        return v;
    }
};