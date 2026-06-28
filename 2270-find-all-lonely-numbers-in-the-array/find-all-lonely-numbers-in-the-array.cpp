class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n=nums.size();
        vector<int> a;
        unordered_map<int,int> r;
        for(int i=0;i<n;i++)
        {
            r[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(r[nums[i]] > 1) continue;
            else {
                if(r[nums[i]-1] == 0 && r[nums[i]+1] == 0)
                {
                    a.push_back(nums[i]);
                }
            }
        }
        return a;
    }
};