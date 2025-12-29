class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ListNode* dummy = new ListNode(0);
        // dummy->next = head;
        // ListNode* slow = dummy;
        // ListNode* fast = dummy;
        // for (int i = 0; i <= n; i++) {
        //     fast = fast->next;
        // }
        // while (fast != NULL) {
        //     slow = slow->next;
        //     fast = fast->next;
        // }
        // slow->next = slow->next->next;
        // return dummy->next;
        int len = 0;
        ListNode* temp = head;
        
        while (temp != NULL) {
            len++;
            temp = temp->next;
        }
        if (n == len) {
            head = head->next;
            return head;
        }
        // to reach to nth node from end
        int m = len - n + 1;
        int idx = m - 1;
        temp = head;
        for (int i = 1; i <= idx-1; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};