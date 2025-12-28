class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++)
        {
            int h=grid[i].size();
            for(int j=0;j<h;j++)
            {
                if(grid[i][j]<0)c++;
            }
        }
        return  c;
    }
};