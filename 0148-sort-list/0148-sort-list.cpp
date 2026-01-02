class Solution {
public:
    ListNode* merge(ListNode* a,ListNode* b){
        ListNode* c = new ListNode(69);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                temp->next = a;
                a = a->next;
                temp = temp->next;
            }
            else{ // b->val < a->val
                temp->next = b;
                b = b->next;
                temp = temp->next;
            }
        }
    if(a==NULL) temp->next = b;
    else temp->next = a;
    return c->next;
}       
    ListNode* sortList(ListNode* head) {
        //to find the left middle
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        //return slow;
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next= NULL;
        a = sortList(a);
        b = sortList(b);
        ListNode* c = merge(a,b);
        return c;
    }
};