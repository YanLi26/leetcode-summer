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
    TreeNode* invertTree(TreeNode* root) {
        DFS(root);
        return root;
    }
    void DFS(TreeNode* root) {
        if(!root) return;
        TreeNode* tmp;
        tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        if(root->left) DFS(root->left);
        if(root->right) DFS(root->right);
    }
};