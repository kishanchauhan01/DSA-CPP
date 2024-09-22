//https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1
/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

class Solution {
  private:
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        
    }
  public:
    Node *copyList(Node *head) {
        // Create clone LL
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp -> data);
            temp = temp -> next;
        }
        
        //cloneNodes add in between original LL
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) {
            Node* next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;
            
            next = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode = next;
        }
        
        //random pointer copy
        temp = head;
        while(temp != NULL) {
            if(temp -> random != NULL) {
                temp -> next -> random = temp -> random -> next;
            }
            else{
                temp -> next -> random = temp -> random;
            }
            //above if else can be written as 
            // temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random;

            temp = temp -> next -> next;
        }
        
        
        //revert changes
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) {
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;
            
            if(originalNode != NULL) {
                cloneNode -> next = originalNode -> next;
            }
            cloneNode = cloneNode -> next;
        }
        
        
        //return ans
        return cloneHead;
        
    }
};


// ----------------------------- using mapping ------------------------------------


/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};*/

class Solution {
  private:
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return ;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    
  public:
    Node *copyList(Node *head) {
        //create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        
        while(temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp -> data);
            temp = temp -> next;
        }
        
        //create a map
        unordered_map<Node*, Node*> oldToNewNode;
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL) {
            oldToNewNode[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL) {
            cloneNode -> arb = oldToNewNode[originalNode -> arb];
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        
        return cloneHead;
        
        
        
    }
};