class Solution {
public:
    string decodeString(string s) {
        int start = 0;
        return DFS(s, start);
    }
    string DFS(string s, int& start) {
        string res;
        while(start < s.size() && s[start] != ']') {
            if(!isdigit(s[start])) res += s[start++];
            else {
                int num = 0;
                while(start < s.size() && isdigit(s[start])) {
                    num = num*10 + s[start] - '0';
                    ++start;
                }
                ++start;
                string tmp = DFS(s, start);
                ++start;
                while(num-- >0) res += tmp;
            }
        }
        return res;
    }
};