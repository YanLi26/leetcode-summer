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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root) return res;
        string onePath;
        DFS(root, res, onePath);
        return res;
    }
    void DFS(TreeNode* root, vector<string>& res, string onePath) {
        if(root->left == NULL && root->right == NULL) {
            onePath += to_string(root->val);
            res.push_back(onePath);
            return;
        }
        onePath += to_string(root->val);
        onePath += "->";
        if(root->left!=NULL) DFS(root->left, res, onePath);
        if(root->right!=NULL) DFS(root->right, res, onePath);
    }
};