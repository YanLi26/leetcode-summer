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
        queue<TreeNode*> layer;
        layer.push(root);
        int num = 1, res = root->val;
        while(!layer.empty()) {
            TreeNode* curr = layer.front(); layer.pop();
            if(curr->left) layer.push(curr->left);
            if(curr->right) layer.push(curr->right);
            --num;
            if(num == 0) {
                num = layer.size();
                if(num == 0) break;
                else res = layer.front()->val;
            }
        }
        return res;
    }
};