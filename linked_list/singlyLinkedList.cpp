#include <bits/stdc++.h>
#include<iostream>
using namespace std;


// The arrow operator -> in C and C++ is used for accessing members (variables, methods) of a structure or class through a pointer. It's specifically applied in scenarios involving dynamic memory allocation, linked lists, and other data structures and instances where objects are accessed through their pointers.

class Node {
    public:
        int data;
        Node* next;//it is hold the address of the object type Node

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next == NULL) {
            cout << "in delete if" << endl;
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }

};

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {

    //inserting at head
    if(position == 1) {
        insertAtHead(head, d);
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
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void deleteNode(int position, Node* &head, Node* &tail) {

    //deleting starting node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;

        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node

        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        if(prev -> next == NULL) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }
}

bool isCircularList(Node* tail) {

    if(tail == NULL) {
        return true;
    }

    Node* temp = tail -> next;

    while(temp != NULL && temp != tail) {
        temp = temp -> next;
    }

    if(temp == tail) {
        return true;
    }

    return false;

}

bool detectLoop(Node* head) {
    if(head == NULL) {
        return false;
    }

    map <Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL) {
        //cycle s present
        if(visited[temp] == true) {
            cout << "present on element" << temp -> data << endl;
            return 1;
        }

        visited[temp] = true;
        temp = temp -> next;

    }

    return 0;


}


int main(){

    //create a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
 
    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);

    print(head);
    insertAtPosition(head, tail, 4, 22);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    tail -> next = head -> next;

    // deleteNode(4, head, tail);
    // print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    cout << tail -> next -> data << endl;

    if(detectLoop(head)) {
        cout << "loop is present" << endl;
    }
    else{
        cout << "false" << endl;
    }

    /*if(isCircularList(tail)) {
        cout << "circular" << endl;
    }
    else{
        cout << "not circular" << endl;
    }*/




    return 0;
}
