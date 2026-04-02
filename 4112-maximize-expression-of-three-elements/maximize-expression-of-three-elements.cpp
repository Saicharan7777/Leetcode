class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        long long int m1=INT_MIN,m2=INT_MIN,n1=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>m1){
                m2=m1;
                m1=nums[i];
            }  
            else if(nums[i]>m2)
            {
                m2=nums[i];
            }
            if(nums[i]<n1
            )
            {
                n1=nums[i];
            }
        }
        return (m1+m2)-n1;
    }
};