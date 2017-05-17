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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        queue<TreeNode*> layer;
        layer.push(root);
        int num = 1, tmp = INT_MIN;
        while(!layer.empty()) {
            TreeNode* curr = layer.front(); layer.pop();
            tmp = max(tmp, curr->val);
            if(curr->left) layer.push(curr->left);
            if(curr->right) layer.push(curr->right);
            --num;
            if(num == 0) {
                num = layer.size();
                res.push_back(tmp);
                tmp = INT_MIN;
            }
        }
        return res;
    }
};