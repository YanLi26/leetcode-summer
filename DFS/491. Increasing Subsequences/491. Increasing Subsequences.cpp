class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> res;
        vector<int> output;
        DFS(nums, res, output, 0);
        return vector<vector<int>> (res.begin(), res.end());
    }
    void DFS(vector<int>& nums, set<vector<int>>& res, vector<int>& output, int start) {
        if(output.size() > 1) res.insert(output);
        for(int i = start; i < nums.size(); ++i) {
            if (!output.empty() && output.back() > nums[i]) continue;
            output.push_back(nums[i]);
            DFS(nums, res, output, i+1);
            output.pop_back();
        }
    }
};