class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "123456789", res;
        int num = 1;
        for(int i = 1; i < n; ++i) num *= i;
        --k;
        for(int i = n; i > 0; --i) {
            int digit = k/num;
            k %= num;
            res.push_back(s[digit]);
            s.erase(s.begin() + digit);
            if(i>1) num/=(i-1);
        }
        return res;
    }
};