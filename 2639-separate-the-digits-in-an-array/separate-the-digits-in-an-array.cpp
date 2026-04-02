class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>r;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=9)r.push_back(nums[i]);
            else
            {
                int v=nums[i];
                string s=to_string(v);
               for(int i=0;i<s.size();i++)
               {
                 r.push_back(s[i]-'0');
               }
            }
        }
        return r;
    }
};