class Solution {
public:
    int smallestIndex(vector<int>& nums) {
         int s=INT_MAX;
         for(int i=0;i<nums.size();i++)
         {
            int v=0,b=nums[i];
            while(b>0)
            {
                v+=b%10; 
                b/=10;
            }
            if(v==i)return i;    
        }

        return -1;
    }
};