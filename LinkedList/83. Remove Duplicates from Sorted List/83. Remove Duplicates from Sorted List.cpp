/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//  Elaine
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* node = head;
        while(node && node->next) {
            if(node->val == node->next->val) node->next = node->next->next;
            else node = node->next;
        }
        return head;
    }
};