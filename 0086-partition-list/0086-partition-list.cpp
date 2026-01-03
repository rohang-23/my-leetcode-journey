class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo = new ListNode(100);
        ListNode* hi = new ListNode(130);
        ListNode* tempLo = lo;
        ListNode* tempHi = hi;
        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->val < x){
                tempLo->next = temp;
                tempLo = tempLo->next;
                temp = temp->next;
            }
            else{
                tempHi->next = temp;
                tempHi = tempHi->next;
                temp = temp->next;
            }
        }
        tempLo->next = hi->next;
        tempHi->next = NULL;
        return lo->next;
        
    }
};