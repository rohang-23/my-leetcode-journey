class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL ) return NULL; 
        set<int> st;
        ListNode* temp = head;
        while (temp != NULL) {
            st.insert(temp->val);
            temp = temp->next;
        }

        ListNode* newHead = NULL;
        ListNode* tail = NULL;
        for (int x : st) {
            ListNode* node = new ListNode(x);

            if (newHead == NULL) {
                newHead = node;
                tail = node;
            } else {
                tail->next = node;
                tail = node;
            }
        }

        return newHead;
    }
};