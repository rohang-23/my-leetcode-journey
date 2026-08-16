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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while(curr && curr->next){
            int g = std::gcd(curr->val,curr->next->val);

            ListNode* newNode = new ListNode(g);
            newNode->next = curr->next;
            curr->next = newNode;

            curr = newNode->next;
            
        }   
        return head; 
    }
};