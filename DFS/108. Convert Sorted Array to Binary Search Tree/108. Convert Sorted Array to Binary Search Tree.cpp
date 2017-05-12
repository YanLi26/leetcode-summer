/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return DFS(nums, 0, nums.size()-1);
    }
    TreeNode* DFS(vector<int>& nums, int left, int right) {
        if(left > right) return NULL;
        int mid = (left + right) / 2;
        TreeNode* tmp = new TreeNode(nums[mid]);
        tmp -> left = DFS(nums, left, mid-1);
        tmp -> right = DFS(nums, mid+1, right);
        return tmp;
    }
};