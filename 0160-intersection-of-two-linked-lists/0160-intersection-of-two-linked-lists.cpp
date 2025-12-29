class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        ListNode* a = headA;
        ListNode* b = headB;

        while (a != b) {
           a = (a != NULL) ? a->next : headB;
           b = (b != NULL) ? b->next : headA;
        }
        return a;
    }
};