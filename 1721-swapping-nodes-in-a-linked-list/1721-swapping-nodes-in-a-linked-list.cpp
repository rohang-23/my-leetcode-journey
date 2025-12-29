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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = head;        
        ListNode* right = head;
        ListNode* curr = head;
        int len = 0;
        while(curr!=NULL){
            curr = curr->next;
            len++;
        }
        
        for (int i = 1; i <= len - k; i++) {
        right = right->next;
        }

        for(int i=1;i<k;i++){
            left = left->next;
            //curr = curr->next;
        }
        
        int temp = right->val;
        right->val = left->val;
        left->val = temp;
        return head;       

    }
};