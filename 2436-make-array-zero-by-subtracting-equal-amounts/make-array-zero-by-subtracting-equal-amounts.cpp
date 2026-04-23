class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>r;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)r[nums[i]]++;
        }

        return r.size();
    }
};