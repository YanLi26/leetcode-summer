class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        queue<pair<int, int>> zero;
        for(int i = 0; i < matrix.size(); ++i) {
            for(int j  = 0; j < matrix[i].size(); ++j) {
                // know how to insert pair into a container
                if(matrix[i][j] == 0) zero.push({i, j});
                else matrix[i][j] = INT_MAX;
            }
        }
        while(!zero.empty()) {
            auto pos = zero.front(); zero.pop();
            int i = pos.first, j = pos.second;
            if(i > 0 && matrix[i-1][j] > matrix[i][j]) {
                matrix[i-1][j] = matrix[i][j] + 1;
                zero.push({i-1, j});
            }
            if(i < matrix.size() - 1 && matrix[i+1][j] > matrix[i][j]) {
                matrix[i+1][j] = matrix[i][j] + 1;
                zero.push({i+1, j});
            }
            if(j > 0 && matrix[i][j-1] > matrix[i][j]) {
                matrix[i][j-1] = matrix[i][j] + 1;
                zero.push({i, j-1});
            }
            if(j < matrix[0].size() - 1 && matrix[i][j+1] > matrix[i][j]) {
                matrix[i][j+1] = matrix[i][j] + 1;
                zero.push({i, j+1});
            }
        }
        return matrix;
    }
};