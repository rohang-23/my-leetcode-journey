class MyLinkedList {
public:
    class Node{
        public:
        int val;
        Node *next;

        Node(int data){
            val = data;
            next = nullptr;
        }
    };

    Node *dummy;
    int size;

    MyLinkedList() {
        dummy = new Node(0);
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >=size) return -1;

        Node *temp = dummy->next;
        for(int i=0;i<index;i++){
            temp = temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        addAtIndex(0, val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size, val);
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index>size) return;

        Node *curr = dummy;
        for(int i=0;i<index;i++){
            curr = curr->next;
        }

        Node *temp = new Node(val);

        temp->next = curr->next;
        curr->next=temp;

        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size) return;

        Node *temp = dummy;

        for(int i=0;i<index;i++){
            temp = temp->next;
        }

        Node *curr = temp->next;
        temp->next = temp->next->next;
        delete curr;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */