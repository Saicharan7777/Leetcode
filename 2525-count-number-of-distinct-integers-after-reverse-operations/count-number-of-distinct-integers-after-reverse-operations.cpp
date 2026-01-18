class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> r;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            r[nums[i]]++;
            string v=to_string(nums[i]);
            reverse(v.begin(),v.end());
            r[stoi(v)]++;
        }
        return r.size();
    }
};