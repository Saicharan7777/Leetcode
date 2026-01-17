class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int l=0,h=nums.size()-1;
        int v=0,b=0,s1=0,s2=0;
        while(l<nums.size())
        {
            if(v!=k&&b!=k)
            {
               s1+=nums[l];
               l++;
               v++;
               s2+=nums[h];
               h--;
               b++;
            }
            else
            {
                break;
            }
        }
        return abs(s1-s2);

    }
};