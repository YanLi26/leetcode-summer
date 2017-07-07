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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int digit = 0;
        ListNode *phead = new ListNode(-1);
        ListNode *curr = phead;
        while(l1 || l2) {
            int n1 = 0, n2 = 0, sum = 0;
            if(l1) n1 = l1->val;
            if(l2) n2 = l2->val;
            sum = n1 + n2 + digit;
            if(sum >= 10) {
                digit = sum/10;
                sum = sum%10;
            }
            else digit = 0;
            ListNode *tmp = new ListNode(sum);
            curr->next = tmp;
            curr = curr->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(digit) {
            ListNode *tmp = new ListNode(digit);
            curr->next = tmp;
        }
        return phead->next;
    }
};