class Solution {
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        int m = click[0], n = click[1];
        if(board[m][n] == 'M') board[m][n] = 'X';
        else {
            int count = 0;
            vector<vector<int>> neighbor;
            for(int i = -1; i < 2; ++i) {
                for(int j = -1; j < 2; ++j) {
                    int row = m+i, col = n+j;
                    if(row < 0 || row >= board.size() || col < 0 || col >= board[m].size()) continue;
                    if(board[row][col] == 'M') ++count;
                    else if(count == 0 && board[row][col] == 'E') neighbor.push_back({row, col});
                }
            }
            if(count == 0) {
                board[m][n] = 'B';
                for(auto vec: neighbor) {
                    board[vec[0]][vec[1]] = 'B';
                    updateBoard(board, vec);
                }
            }
            else board[m][n] = count + '0';
        }
        return board;
    }
};