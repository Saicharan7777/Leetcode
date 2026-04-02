class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        map<int,int> r;

        int m=INT_MIN;
        for(int i=0;i<n;i++)
        {
            r[nums[i]]++;
            m=max(m,r[nums[i]]);
        }

      int c=0;
        for(int i=0;i<n;i++)
        {
            if(r[nums[i]]==m){
                c+=r[nums[i]];
                r[nums[i]]=0;
                }
        }
        return c;
    }
};