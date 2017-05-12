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
    int maxDepth(TreeNode* root) {
        int res = 0;
        DFS(root, res, 0);
        return res;
    }
    void DFS(TreeNode* root, int& res, int onePath) {
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) {
            res = max(res, onePath+1);
            return;
        }
        DFS(root->left, res, onePath+1);
        DFS(root->right, res, onePath+1);
    }
};