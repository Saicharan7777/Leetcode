class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>b;
        for(int i=0;i<n;i+=2)
        {
            b.push_back(nums[i+1]);
            b.push_back(nums[i]);
        }
        return b;
    }
};