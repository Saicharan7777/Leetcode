class Solution {
public:
   
   int leftside(vector<int>& a, int t){
        int l=0,h=a.size()-1;
        int n=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(a[m]<t)
            {
                l=m+1;
            }
            else
            {
                if(a[m]==t)
               {
                n=m;
               }
                h=m-1;
            }
        }
        return n;
   }

   int rightside(vector<int>& a, int t){
        int l=0,h=a.size()-1;
        int n=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(a[m]>t)
            {
                h=m-1;
            }
            else
            {
             if(a[m]==t)
               {
                n=m;
               }
                l=m+1;
            }
        }
        return n;
   }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n1=leftside(nums,target);
        int m1=rightside(nums,target);
        
          return {n1,m1};

    }
};