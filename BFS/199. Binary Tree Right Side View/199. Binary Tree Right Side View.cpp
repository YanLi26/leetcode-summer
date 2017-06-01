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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> rightNode;
        vector<int> res;
        if(!root) return res;
        rightNode.push(root);
        while(!rightNode.empty()) {
            res.push_back(rightNode.back()->val);
            int size = rightNode.size();
            for(int i = 0; i < size; ++i) {
                TreeNode* tmp = rightNode.front();
                rightNode.pop();
                if(tmp->left) rightNode.push(tmp->left);
                if(tmp->right) rightNode.push(tmp->right);
            }
        }
        return res;
    }
};