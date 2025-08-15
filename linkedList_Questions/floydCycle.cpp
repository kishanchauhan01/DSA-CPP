#include <bits/stdc++.h>

#include <iostream>
using namespace std;

// The arrow operator -> in C and C++ is used for accessing members (variables,
// methods) of a structure or class through a pointer. It's specifically applied
// in scenarios involving dynamic memory allocation, linked lists, and other
// data structures and instances where objects are accessed through their
// pointers.

class Node {
   public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        // memory free
        if (this->next == NULL) {
            cout << "in delete if" << endl;
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node*& head, Node*& tail, int position, int d) {
    // inserting at head
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    // inserting at tail
    if (temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node*& head) {
    Node* temp = head;

    cout << endl;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node*& head, Node*& tail) {
    // deleting starting node
    if (position == 1) {
        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    } else {
        // deleting any middle node or last node

        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        if (prev->next == NULL) {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

Node* floydDetectLopp(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast) {
            cout << "Present at:- " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

Node* getStartingNode(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* intersection = floydDetectLopp(head);
    Node* slow = head;

    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    cout << "Starting Node of loop is:- " << slow->data << " ";
    return slow;
}

void removeLoop(Node* head) {
    if (head == NULL) {
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;
    while (temp->next != startOfLoop) {
        temp = temp->next;
    }

    temp->next = NULL;
}

int main() {
    // create a new node
    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);

    print(head);
    insertAtPosition(head, tail, 4, 22);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    cout << "tail->next " << tail->next << endl;
    tail->next = head->next;
    cout << "tail->next " << tail->next->data << endl;

    if (floydDetectLopp(head) != NULL) {
        cout << "loop is present" << endl;
    } else {
        cout << "loop is not present" << endl;
    }

    // if(getStartingNode(head) != NULL) {
    //     cout << "loop is present" << endl;
    // }
    // else{
    //     cout << "loop is not present" << endl;
    // }

    // // cout << "head:- " << head -> data << endl;

    // removeLoop(head);
    // cout << "After removing loop" << endl;
    // print(head);

    return 0;
}