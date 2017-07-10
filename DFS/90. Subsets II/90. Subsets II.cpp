class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>res;
        vector<int> op;
        sort(nums.begin(), nums.end());
        DFS(res, nums, op, 0);
        return vector<vector<int>> (res.begin(), res.end());
    }
    void DFS(set<vector<int>>& res, vector<int> nums, vector<int>& op, int pos) {
        res.insert(op);
        for(int i = pos; i < nums.size(); ++i) {
            op.push_back(nums[i]);
            DFS(res, nums, op, i+1);
            op.pop_back();
        }
    }
};