class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> r;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            r[nums[i]]++;
            int t=0,v=nums[i];
            while(v>0)
            {
                t=t*10+(v%10);
                v=v/10;
            }
            r[t]++;
        }
        return r.size();
    }
};