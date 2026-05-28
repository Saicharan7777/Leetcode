class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n=nums.size();
        int c=1,v=1;
        for(int i=1;i<n;i++)
       {
          if(nums[i]==nums[i-1])
          {
            c++;
          }
          else
          {
            c=1;
          }
           if(c<=k)
          {
            nums[v]=nums[i];
            v++;
          }
       }
       nums.resize(v);
       return nums; 
    }
};