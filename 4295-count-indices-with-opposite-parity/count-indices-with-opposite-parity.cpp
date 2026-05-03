class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        int c=0,v=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)c++;
            else v++;
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]%2!=0)
            {
                v--;
                nums[i]=c;
            }
            else
            {
                c--;
                nums[i]=v;
            }
        }

        return nums;
    }
};