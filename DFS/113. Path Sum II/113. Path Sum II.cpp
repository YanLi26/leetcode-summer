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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> op;
        DFS(res, root, sum, op);
        return res;
    }
    void DFS(vector<vector<int>>& res, TreeNode* root, int sum, vector<int>& op) {
        if(!root) return;
        op.push_back(root->val);
        if(sum == root->val && !root->left && !root->right) {
            res.push_back(op);
        }
        DFS(res, root->left, sum - root->val, op);
        DFS(res, root->right, sum - root->val, op);
        op.pop_back();
    }
};