class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int s=0,a=0,b=n-1;
        for(int i=0;i<n;i++)
        {
            if(a!=b)
            {
                s+=mat[i][a];
                s+=mat[i][b];
            }
            else
            {
                
                s+=mat[i][a];
            }
            a++;
            b--;
        }
        return s;
    }
       
};