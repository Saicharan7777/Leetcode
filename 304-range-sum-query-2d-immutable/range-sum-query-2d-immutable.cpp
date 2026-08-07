class NumMatrix {
private:
    vector<vector<int>> ans;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();

        ans.resize(m + 1, vector<int>(n + 1, 0));

        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                int current = matrix[i - 1][j - 1];
                int top = ans[i - 1][j];
                int left = ans[i][j - 1];
                int diagonal = ans[i - 1][j - 1];
                ans[i][j] = current + top + left - diagonal;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total = ans[row2 + 1][col2 + 1];
        int removetop = ans[row1][col2 + 1];
        int removeleft = ans[row2 + 1][col1];
        int addback = ans[row1][col1];

        return total - removetop - removeleft + addback;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */