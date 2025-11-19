class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        for(int i=0;i<nums.size();i++)
        {
            if(find(nums.begin(),nums.end(),original)!=nums.end())original*=2;
        }
        return original;
    }
};