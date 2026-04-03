class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
     int n=nums.size();

     if(n<=2) return -1;

     int m1=INT_MAX,m2=INT_MIN;
     for(int i=0;i<n;i++)
     {
        m1=min(m1,nums[i]);
        m2=max(m2,nums[i]);
     }   

     for(int i=0;i<n;i++)
     {
        if(nums[i]!=m1&&nums[i]!=m2)return nums[i];
     }

     return -1;
    }
};