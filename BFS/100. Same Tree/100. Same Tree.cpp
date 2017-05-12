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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        queue<TreeNode*> pnode, qnode;
        pnode.push(p); qnode.push(q);
        while(!pnode.empty() && !qnode.empty()) {
            TreeNode* p1 = pnode.front();
            TreeNode* q1 = qnode.front();
            pnode.pop(); qnode.pop();
            if((!p1 && q1) || (p1 && !q1)) return false;
            if(!p1 && !q1) continue;
            if(p1->val != q1->val) return false;
            else {
                pnode.push(p1->left);
                pnode.push(p1->right);
                qnode.push(q1->left);
                qnode.push(q1->right);
            }
        }
        return pnode.size() == qnode.size();
    }
};