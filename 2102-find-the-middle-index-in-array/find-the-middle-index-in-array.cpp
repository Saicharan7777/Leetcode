class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        for(int j=0;j<n;j++)
        {
            s+=nums[j];
        }
        int v=0;
        for(int i=0;i<n;i++)
        {
            
            s-=nums[i];
            if(v==s)return i;
            v+=nums[i];
        }
        return -1;
    }
};