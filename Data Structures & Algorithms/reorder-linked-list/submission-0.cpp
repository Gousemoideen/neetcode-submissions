class Solution {
public:
    void reorderList(ListNode* head) {
        // 1. Find middle
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse second half
        ListNode* prev = NULL;
        ListNode* curr = slow->next;
        slow->next = NULL;
        while (curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        // 3. Merge
        ListNode* l1 = head;
        ListNode* l2 = prev;
        while (l2) {
            ListNode* n1 = l1->next;
            ListNode* n2 = l2->next;
            l1->next = l2;
            l2->next = n1;
            l1 = n1;
            l2 = n2;
        }
    }
};