class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int res = 0;
        DFS(nums, S, res, 0);
        return res;
    }
    void DFS(vector<int>& nums, int S, int& res, int i) {
        if(S == 0 && i == nums.size()) ++res;
        else if(i == nums.size()) return;
        else {
            DFS(nums, S-nums[i], res, i+1);
            DFS(nums, S+nums[i], res, i+1);
        }
    }
};