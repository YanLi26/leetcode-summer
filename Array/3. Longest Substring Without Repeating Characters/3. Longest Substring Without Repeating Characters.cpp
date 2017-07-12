class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, left = 0;
        unordered_map<char,int> m;
        for (int i = 0; i < s.size(); ++i) {
            if (m.find(s[i]) == m.end()) {
                m[s[i]] = i+1;
                res = max(res, i-left+1);
                cout<<res<<endl;
            }
            else {
                if (m[s[i]] < left) res = max(res, i-left+1);
                else left = m[s[i]];
                m[s[i]] = i + 1;
            }      
        }
        return res;
    }
};