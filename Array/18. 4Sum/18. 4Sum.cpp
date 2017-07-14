class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if (nums.size() < 4) return res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; ++i) {
            for (int j = i + 1; j < nums.size() - 2; ++j) {
                int left = j + 1, right = nums.size() - 1;
                while (left < right) {
                    if (nums[left] + nums[right] + nums[i] + nums[j] == target) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        ++left; -- right;
                    }
                    else if (nums[left] + nums[right] + nums[i] + nums[j] < target) ++left;
                    else --right;
                }
            }
        }
        set<vector<int>> a(res.begin(), res.end());
        return vector<vector<int>> (a.begin(), a.end());
    }
};