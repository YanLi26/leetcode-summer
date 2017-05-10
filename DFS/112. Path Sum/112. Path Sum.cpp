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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        return DFS(root, sum);
    }
    bool DFS(TreeNode* root, int sum) {
        if(root == NULL) return false;
        else if(root -> left == NULL && root -> right == NULL) {
            if(sum - root->val == 0) return true;
            else return false;
        }
        return DFS(root->left, sum-root->val) || DFS(root->right, sum-root->val);
    }
};