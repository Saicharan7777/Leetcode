class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        stack<int>s;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(s.empty()||(s.top()!=nums[i]&&s.size()<k))s.push(nums[i]);
            if(s.size()==k)break;
        }
        vector<int>r;
        while(!s.empty()){
        r.push_back(s.top());
        s.pop();
        }
      reverse(r.begin(),r.end());
      return r;
    }
};