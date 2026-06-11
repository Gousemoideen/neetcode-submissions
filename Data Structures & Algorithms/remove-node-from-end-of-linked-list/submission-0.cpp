/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* dummy = new ListNode(0, head);
        ListNode* sec = dummy;

        for(int i=0;i<n;i++) {
            first = first->next;
        }

        while(first!=NULL) {
            first = first->next;
            sec = sec->next;
        }

        ListNode* del = sec->next;
        sec->next = del->next;

        
        delete del;

        return dummy->next;

    }
};