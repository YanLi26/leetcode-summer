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
    int sumNumbers(TreeNode* root) {
        return DFS(root, 0);
    }
    int DFS(TreeNode* root, int res) {
        if(!root) return 0;
        res = res*10 + root->val;
        if(!root->left && !root->right) return res;
        return DFS(root->left, res) + DFS(root->right, res);
    }
};