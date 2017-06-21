/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return new TreeNode(head->val);
        ListNode* slow = head, *fast = head, *pre = head;
        while (fast->next && fast->next->next) {
            pre = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* headTwo = slow->next;
        pre->next = NULL;
        TreeNode* root = new TreeNode(slow->val);
        if(slow!=head) root->left = sortedListToBST(head);
        root->right = sortedListToBST(headTwo);
        return root;
    }
};