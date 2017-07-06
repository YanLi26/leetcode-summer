class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, mid;
        while(left <= right) {
            mid = (left + right)/2;
            if(nums[mid] == target) return true;
            if(nums[mid] > nums[right]) {
                if(target > nums[mid] || target < nums[left]) left = mid + 1;
                else right = mid - 1;
            }
            else if(nums[mid] < nums[right]) {
                if(target < nums[mid] || target > nums[right]) right = mid - 1;
                else left = mid + 1;
            }
            else --right;
        }
        return false;
    }
};