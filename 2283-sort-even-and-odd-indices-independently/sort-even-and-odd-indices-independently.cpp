class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) { 
        int n=nums.size();
        vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int g=0,h=b.size()-1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)nums[i]=a[g++];
            else nums[i]=b[h--];
        }
        return nums;
    }
};