class Solution {
public:
    bool p(int n)
    {
        if(n<=1)return false;
        if(n==2)return true;
        if(n%2==0)return false;

        for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
        }
    return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int>r;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            r[nums[i]]++;
        }

        for(int i=0;i<n;i++)
        {
            if(p(r[nums[i]]))return true;
        }
        return false;
    }
};