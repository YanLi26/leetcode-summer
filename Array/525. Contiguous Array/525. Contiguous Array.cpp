class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> sumMap;
        sumMap[0] = -1;
        int sum = 0, res = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == 1) ++sum;
            else --sum;
            if(sumMap.find(sum) != sumMap.end())
                res = max(res, i-sumMap[sum]);
            else sumMap[sum] = i;
        }
        if(sum == 0) res = nums.size();
        return res;
    }
};