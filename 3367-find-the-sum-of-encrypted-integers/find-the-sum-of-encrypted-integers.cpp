class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums){
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
            int x=nums[i];
            int m=0;
            int l=0;
            while(x>0){
                int d=x%10;
                if(d>m)m=d;
                l++;
                x/=10;
            }
            int num=0;
            for(int j=0;j<l;j++){
                num=num*10+m;
            }
            s+=num;
        }
        return s;
    }
};