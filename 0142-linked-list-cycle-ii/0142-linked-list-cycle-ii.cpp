
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;
        int flag =false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
               flag=true;
               break;
            } 
        }
        if(flag==true){
            while(slow!=temp){
                slow=slow->next;
                temp=temp->next;
            }
            return slow;
        }
        return NULL;
    }
};