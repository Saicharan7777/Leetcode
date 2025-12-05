class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int i=1,s=0;
        while(i<nums.size()){
            s+=nums[i];
            i++;
        }
         int r=0,f=0,g=0;
        for(int j=0;j<nums.size()-1;j++)
        {
         r+=nums[j];
         if(abs(r-s)%2==0)f++;
         s-=nums[j+1];

        }
        return f;
    }
};