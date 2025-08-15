#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        if (this->next == NULL) {
            delete next;
            this->next = NULL;
        }
    }
};

void insertNode(Node*& tail, int element, int d) {
    // if list is empty
    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    } else {
        Node* curr = tail;

        while (curr->data != element) {
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail) {
    Node* temp = tail;

    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    while (true) {
        cout << temp->data << "-> ";
        temp = temp->next;
        if (temp == tail) {
            break;
        }
    }
    cout << "Repeate" << endl;
}

void deleteNode(Node*& tail, int val) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* prev = tail;
    Node* curr = tail->next;

    while (curr->data != val) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    // only one node is there
    if (curr == prev) {
        tail = NULL;
    }

    //>=2 node LL
    if (curr == tail) {
        tail = prev;
    }
    curr->next = NULL;
    delete curr;
}

int main() {
    Node* tail = NULL;
    insertNode(tail, 3, 1);
    insertNode(tail, 1, 2);
    insertNode(tail, 2, 3);
    insertNode(tail, 3, 4);
    insertNode(tail, 4, 5);
    print(tail);
    deleteNode(tail, 3);
    print(tail);

    return 0;
}