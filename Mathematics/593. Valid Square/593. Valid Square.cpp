class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        map<int,int> m;
        ++m[len(p1,p2)]; ++m[len(p1,p3)]; ++m[len(p1,p4)]; ++m[len(p2,p3)]; ++m[len(p2,p4)];
        return m.size() == 2 && (++m[len(p3,p4)] == 2 || m[len(p3,p4)] == 4);
    }
    int len(vector<int> v1, vector<int> v2) {
        return pow((v1[1] - v2[1]), 2) + pow((v1[0] - v2[0]), 2);
    }
};