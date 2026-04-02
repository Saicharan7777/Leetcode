class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>r;
        for(int i=0;i<n;i++)
        {
            r[nums[i]]++;
        }

        int s=0;
        for(int i=0;i<n;i++)
        {
            if(r[nums[i]]%k==0){
                s+=(nums[i]*r[nums[i]]);
                r[nums[i]]=0;
            }
        }
        return s;
    }
};

