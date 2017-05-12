class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int n = M.size(), relation = 1, res = 0;
        vector<int> friendCircle(n, 0);
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(j == i) continue;
                if(M[i][j] == 1) {
                    if(friendCircle[i] == 0 && friendCircle[j] == 0) {
                        friendCircle[i] = relation;
                        friendCircle[j] = relation;
                        ++relation;
                    }
                    else if(friendCircle[i] != 0 && friendCircle[j] == 0) friendCircle[j] = friendCircle[i];
                    else if(friendCircle[i] == 0 && friendCircle[j] != 0) friendCircle[i] = friendCircle[j];
                    else if(friendCircle[i] == friendCircle[j]) continue;
                    else {
                        int tmp = friendCircle[j];
                        for(int k = 0; k < n; ++k) {
                            if(friendCircle[k] == tmp) friendCircle[k] = friendCircle[i];
                        }
                    }
                }
            }
        }
        relation = 0;
        for(int i = 0; i < n; ++i) {
            if(friendCircle[i] == 0) {
                relation = 1;
                ++res;
            }
        }
        set<int> s(friendCircle.begin(), friendCircle.end());
        return s.size() + res - relation;
    }
};