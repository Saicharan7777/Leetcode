class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        map<int,int>r;
        for(int i=0;i<n;i++)
        {
            r[nums[i]]++;
        }

        int s=0;
        for(int i=0;i<n;i++)
        {
            if(r[nums[i]]==1)s+=nums[i];
        }

        return s;
    }
};