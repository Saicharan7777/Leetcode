class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
     int n=nums.size();

     if(n<=2) return -1;

     int a=nums[0],b=nums[1],c=nums[2];

     if(a>b&&a<c||a>c&&a<b)return a;
     else if(b>a&&b<c||b>c&&b<a)return b;
     else return c;
    }
};