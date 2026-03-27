class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>r;
        int m=-1;
        for(int i=0;i<n;i++)
        {
            r[nums[i]]++;  
        }

         for(int i=0;i<n;i++)
        {
            if(nums[i]>m&&nums[i]>0)
            {
                if(r[-1*nums[i]]>0&&r[nums[i]]>0)m=nums[i];
            } 
        }
        return m;
    }
};