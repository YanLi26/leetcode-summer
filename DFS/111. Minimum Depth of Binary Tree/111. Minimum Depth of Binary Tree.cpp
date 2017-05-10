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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int res = INT_MAX;
        DFS(root, res, 0);
        return res;
    }
    void DFS(TreeNode* root, int& res, int sum) {
        if(root == NULL) return;
        if(root -> left == NULL && root -> right == NULL) {
            res = min(res, sum+1); return;
        }
        if(root->left) DFS(root->left, res, sum+1);
        if(root->right) DFS(root->right, res, sum+1);
    }
};