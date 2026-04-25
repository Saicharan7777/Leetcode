class Solution {
public:
    bool validDigit(int n, int x) {
       int v=0,l=0;

       while(n!=0)
       {   v=n%10;
           if(v==x)
           {
              l=1;
           }
           n=n/10;
       }
       if(l==0||v==x)return false;
       else return true;
    }
};