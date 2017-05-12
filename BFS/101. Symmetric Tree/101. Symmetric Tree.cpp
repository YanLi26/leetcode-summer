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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*> ql, qr;
        ql.push(root->left); qr.push(root->right);
        while(!ql.empty() && !qr.empty()) {
            TreeNode* nodel = ql.front();
            TreeNode* noder = qr.front();
            ql.pop(); qr.pop();
            if((nodel == NULL && noder != NULL) || (nodel != NULL && noder == NULL)) return false;
            if (nodel == NULL && noder == NULL) continue;
            if(nodel->val == noder->val) {
                ql.push(nodel->left);
                ql.push(nodel->right);
                qr.push(noder->right);
                qr.push(noder->left);
            }
            else return false;
        }
        return true;
    }
};