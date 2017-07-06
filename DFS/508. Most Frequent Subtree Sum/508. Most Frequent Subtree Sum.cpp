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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> curr, res;
        DFS(root, curr);
        map<int, int> m;
        int max = 0;
        for(int num: curr) {
            ++m[num];
            if(m[num] > max) max = m[num];
        }
        for(auto it = m.begin(); it != m.end(); ++it) {
            if(it->second == max) res.push_back(it->first);
        }
        return res;
    }
    int DFS(TreeNode* root, vector<int>& curr) {
        if(!root) return 0;
        int sum = root->val;
        if(root->left) sum += DFS(root->left, curr);
        if(root->right) sum += DFS(root->right, curr);
        curr.push_back(sum);
        return sum;
    }
};