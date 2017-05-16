class Solution {
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        queue<pair<int,int>> game;
        game.push({click[0], click[1]});
        while(!game.empty()) {
            int m = game.front().first, n = game.front().second, count = 0; game.pop();
            if(board[m][n] == 'M') {
                board[m][n] = 'X';
                continue;
            }
            vector<pair<int,int>> neighbor;
            for(int i = -1; i < 2; ++i) {
                for(int j = -1; j < 2; ++j) {
                    int x = m + i, y = n + j;
                    if(x < 0 || x >= board.size() || y < 0 || y >= board[m].size() || (i == 0 && j == 0)) continue;
                    if(board[x][y] == 'M') ++count;
                    else if(count == 0 && board[x][y] == 'E') neighbor.push_back({x, y});
                }
            }
            if(count == 0) {
                board[m][n] = 'B';
                for(auto vec: neighbor) {
                    board[vec.first][vec.second] = 'B';
                    game.push(vec);
                }
            }
            else board[m][n] = count + '0';
        }
        return board;
    }
};