class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       unordered_set<char> rows[9], columns[9], boxes[9];

       for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if(board[i][j] == '.') {
                continue;
            }
            char ch = board[i][j];
            int box_index = (i / 3) * 3 + (j / 3);
            if(rows[i].count(ch) || columns[j].count(ch) || boxes[box_index].count(ch)) {
                return false;
            }
            rows[i].insert(ch);
            columns[j].insert(ch);
            boxes[box_index].insert(ch);
        }
       }
       return true;
    }
};