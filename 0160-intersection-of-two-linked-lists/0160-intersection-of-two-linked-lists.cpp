class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int headAlen=0;
        int headBlen=0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA!=NULL){
               headAlen++;
               tempA=tempA->next;                     
        }
         while(tempB!=NULL){
               headBlen++;           
               tempB=tempB->next;           
        }

        tempA = headA;
        tempB = headB;

        if(headAlen>headBlen){
             int diff = headAlen-headBlen;
             for(int i=1;i<=diff;i++){
                 tempA = tempA->next;
             }
             while(tempA!=tempB){
                tempA=tempA->next;
                tempB=tempB->next;
             }
            return tempA;
        }

        else{
             int diff = headBlen-headAlen;
             for(int i=1;i<=diff;i++){
                 tempB = tempB->next;
             }
             while(tempA!=tempB){
                tempA=tempA->next;
                tempB=tempB->next;
             }
             return tempB;
        }
        
    }
};