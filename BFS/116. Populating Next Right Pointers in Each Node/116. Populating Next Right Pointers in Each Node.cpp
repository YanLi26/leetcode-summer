/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        queue<TreeLinkNode*> nextNode;
        if(!root) return;
        nextNode.push(root);
        while(!nextNode.empty()) {
            int size = nextNode.size();
            for(int i = 0; i < size; ++i) {
                TreeLinkNode* tmp = nextNode.front();
                nextNode.pop();
                if(i < size - 1) {
                    tmp->next = nextNode.front();
                }
                if(tmp->left) nextNode.push(tmp->left);
                if(tmp->right) nextNode.push(tmp->right);
            }
        }
    }
};