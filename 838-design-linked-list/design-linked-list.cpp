class Node{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class MyLinkedList {
public: 
    Node *head;
    Node *tail;
    MyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    
    int get(int index) {
       int count = 0;
       Node *temp = head;
       while(temp != NULL)
       {
          if(count == index)
          {
            return temp->data;
          }
          count++;
          temp = temp->next;
       }
       return -1;
    }
    
    void addAtHead(int val) {
        Node *newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    
    void addAtTail(int val) {
        Node *newNode = new Node(val);
        Node *temp = head;
       if(head == NULL)
       {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    void addAtIndex(int index, int val) {
        Node *newNode = new Node(val);
        Node *temp = head;
        int count = 0;
        if(index == 0)
        {
            newNode->next = head;
            head = newNode;
            if(tail == NULL)
            {
                tail = newNode;
            }
            return;
        }
        while(temp != NULL)
        {
            if(count + 1 == index)
            {
                Node *nextNode = temp->next;
                temp->next = newNode;
                newNode->next = nextNode;
                if(newNode->next == NULL)
                {
                   tail = newNode;
                }
                break;
            }
            count++;
            temp = temp->next;
        }
    }
    
    void deleteAtIndex(int index) {
        Node *temp = head;
        int count = 0;
        while(temp != NULL)
        {
            if(index == 0)
            {
               head = head->next;
               if(head == NULL)
               {
                  tail = NULL;
               }
                break;
            }
            if(count + 1 == index && temp->next != NULL)
            {
                Node *newNode = temp->next->next;
                temp->next = newNode;
                if(newNode == NULL)
                {
                    tail = temp;
                }
                break;
            }
            count++;
            temp = temp->next;
        }
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