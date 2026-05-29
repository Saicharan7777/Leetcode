class Solution {
public:
    int minElement(vector<int>& nums) {
       int min1=100;
        for(int i=0;i<nums.size();i++)
        {
            int s=0;
            int sum=nums[i];
            while(sum!=0)
            {
                int re=sum%10;
                s+=re;
                sum=sum/10;
            }
           if(s<min1)min1=s;

        }
        return min1;
    }
};