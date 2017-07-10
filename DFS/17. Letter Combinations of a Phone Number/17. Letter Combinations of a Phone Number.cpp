class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> digitStr = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, res;
        DFS(res, digitStr, digits, "", 0);
        return res;
    }
    void DFS(vector<string> &res, vector<string> s, string d, string op, int pos) {
        if(pos == d.size()) {
            res.push_back(op);
            return;
        }
        string str = s[d[pos] - '2'];
        for(int i = 0; i < str.size(); ++i) {
            op.push_back(str[i]);
            DFS(res, s, d, op, pos+1);
            op.pop_back();
        }
    }
};