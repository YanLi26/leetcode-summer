/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *pre, *phead, *curr = head;
        pre = new ListNode(-1);
        pre->next = head;
        phead = pre;
        while(curr && curr->val < x) {
            curr = curr->next;
            pre = pre->next;
        }
        curr = pre;
        while(curr->next) {
            if(curr->next->val < x) {
                ListNode* tmp = curr->next;
                curr->next = tmp->next;
                tmp->next = pre->next;
                pre->next = tmp;
                pre = pre->next;
            }
            else curr = curr->next;
        }
        return phead->next;
    }
};