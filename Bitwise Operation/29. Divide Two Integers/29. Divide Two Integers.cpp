class Solution {
public:
    int divide(int dividend, int divisor) {
        long m = abs((long)dividend), n = abs((long)divisor), res = 0;
        while(m >= n) {
            long tmp = n, curr = 1;
            while(m > (tmp << 1)) {
                tmp <<= 1;
                curr <<= 1;
            }
            res += curr;
            m -= tmp;
        }
        if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
            res = -res;
        if(res > INT_MAX) res = INT_MAX;
        return (int)res;
    }
};