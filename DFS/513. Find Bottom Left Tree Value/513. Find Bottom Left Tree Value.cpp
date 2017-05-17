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
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        int depthMax = 0, res = root->val;
        DFS(root, 0, depthMax, res);
        return res;
    }
    void DFS(TreeNode* root, int depth, int& depthMax, int& res) {
        if(!root) return;
        if(depth > depthMax) {
            depthMax = depth;
            res = root->val;
        }
        DFS(root->left, depth+1, depthMax, res);
        DFS(root->right, depth+1, depthMax, res);
    }
};