class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            c=max(nums[i],c);
        }
        for(int i=1;i<=c+k;i++)
        {
            if(i%k==0&&find(nums.begin(),nums.end(),i)==nums.end()){
                return i;
            }
        }
        return 0;
    }
};