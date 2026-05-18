class Solution {
public:
    int Bits_Result(int n)
    {
        int c=0;
        while(n>0)
        {
          if(n%2!=0)c++;
          n/=2;
        }
        return c;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n=nums.size(),s=0;
        for(int i=0;i<n;i++)
        {
            int b=Bits_Result(i);
            if(b==k)s+=nums[i];
        }
        return s;
    }
};