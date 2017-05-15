class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int n = M.size(), res = 0;
        vector<int> visited(n, false);
        for(int i = 0; i < n; ++i) {
            if(visited[i]) continue;
            DFS(M, visited, i);
            ++res;
        }
        return res;
    }
    void DFS(vector<vector<int>> M, vector<int>& visited, int i) {
        visited[i] = true;
        for(int j = 0; j < M.size(); ++j) {
            if(visited[j] || M[i][j] == 0) continue;
            DFS(M, visited, j);
        }
    }
};