class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int v=n/2;
        unordered_map<int,int>r;
        for(int i=0;i<n;i++)
        {
            r[nums[i]]++;
        }

        for(int i=0;i<n;i++)
        {
            if(r[nums[i]]==v)return nums[i];
        }
        return 0;
    }
};