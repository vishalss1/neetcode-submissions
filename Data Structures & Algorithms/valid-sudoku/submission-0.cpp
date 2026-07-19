class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // rows and cols
        for(int i = 0; i < 9; i++) {
            unordered_map<int, int> row;
            unordered_map<int, int> col;
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    if(row.count(board[i][j])) {
                        return false;
                    }
  
                    row[board[i][j]]++;
                }
                
                if(board[j][i] != '.') {
                    if(col.count(board[j][i])) {
                        return false;
                    }

                    col[board[j][i]]++;
                }
            }
        }

        // the boxes
        for(int boxRow = 0; boxRow < 9; boxRow += 3) {
            for(int boxCol = 0; boxCol < 9; boxCol += 3) {
                unordered_map<int, int> box;
                for(int i = 0; i < 3; i++) {
                    for(int j = 0; j < 3; j++) {
                        char c = board[boxRow + i][boxCol + j];

                        if(c == '.') continue;

                        if(box.count(c)) return false;

                        box[c]++;
                    }
                }
            }
        }

        return true;
    }
};
