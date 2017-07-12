class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int res = 0;
        if (k < 0) return 0;
        unordered_map <int, int> m;
        for (int num: nums) ++m[num];
        for (auto mNum: m) {
            cout<<mNum.first<<endl;
            if (k == 0 && mNum.second > 1) ++res;
            else if (k != 0 && m.find(mNum.first + k) != m.end() && m[mNum.first + k] > 0) ++res;
        }
        return res;
    }
};