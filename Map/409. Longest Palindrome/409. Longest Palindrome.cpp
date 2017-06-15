class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0, tag = 0;
        unordered_map<char, int> paliMap;
        for(char a: s) ++paliMap[a];
        for(auto it = paliMap.begin(); it != paliMap.end(); ++it) {
            if(it->second % 2 == 0) res += it->second;
            else { 
                res += it->second - 1;
                tag = 1;
            }
        }
        return res+tag;
    }
};