#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
    
    //constructor
    Node(int d) {
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

    //destructro
    ~Node() {
        int val = this -> data;
        if(this -> next == NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }

};

//traversing a linked list
void print(Node* head) {
    Node * temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


//gives the length of linked list
int getLength(Node* head) {
    int len = 0;
    Node * temp = head;

    while(temp != NULL) {
        temp = temp -> next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &tail, Node* &head, int d) {
    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d) {

    if(head == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;

    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {

    //inserting at head
    if(position == 1) {
        insertAtHead(tail, head, d);
        return;
    }



    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }

    //inserting at tail
    if(temp -> next == NULL) {
        insertAtTail(head, tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next  = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}

void deleteNode(int position, Node* &head, Node* &tail) {

    //deleting starting node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;

    }
    else{
        //deleting any middle node or last node

        Node* curr = head;
        Node* temp = NULL;

        int cnt = 1;
        while(cnt < position) {
            temp = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        temp -> next = curr -> next;
        if(temp -> next == NULL) {
            tail = temp;
        }
        
        else{
            curr -> next -> prev = temp;
        }

        // cout << "prev data:-" << temp -> next -> prev -> data << endl;
        // cout << "next data:-" << temp -> next ->  data << endl;
        curr -> next = NULL;

        delete curr;

    }
}

int main(){
    
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    cout <<  "length:- " << getLength(head) << endl;

    insertAtHead(tail, head, 11);
    print(head);

    insertAtHead(tail, head, 10);
    print(head);

    insertAtHead(tail, head, 9);
    print(head);


    insertAtTail(head, tail, 25); //because if we write head at the place of tail then in points to the first element here 9 and if we write tail it points to the last elements.
    print(head);

    insertAtPosition(head, tail, 2, 100);
    print(head);

    cout << "length:- " << getLength(head) << endl;

    insertAtPosition(head, tail, 6, 128);
    print(head);

    deleteNode(3, head, tail);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;
    
    return 0;
}