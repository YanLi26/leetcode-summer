class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        for(int i = 0; i < nums.size(); ++i) {
            int pos = abs(nums[i]) - 1;
            if(nums[pos] < 0) res.push_back(abs(nums[i]));
            else nums[pos] *= -1;
        }
        return res;
    }
};