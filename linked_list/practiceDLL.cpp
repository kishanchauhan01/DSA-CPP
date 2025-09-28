#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* next;
    Node* prev;
    static int size;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
        size++;
    }

    ~Node() {
        if (this->next == NULL) {
            delete next;
            this->next = NULL;
            size--;
        }
    }
};

static int getLength() { return Node::size; }

void insertAtHead(Node*& head, Node*& tail, int d) {
    // empty list
    if (head == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    } else {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node*& head, Node*& tail, int d) {
    // empty list
    if (head == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    } else {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node*& head, Node*& tail, int position, int d) {
    // insert at head
    if (position == 1) {
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL) {
        insertAtTail(head, tail, d);
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node*& head, Node*& tail) {
    if (position == 1) {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else {
        Node* curr = head;
        Node* temp = NULL;
        int cnt = 1;

        while (cnt < position) {
            temp = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        temp->next = curr->next;
        if (temp->next == NULL) {
            tail = temp;
        } else {
            curr->next->prev = temp;
        }

        curr->next = NULL;
        delete curr;
    }
}

void print(Node*& head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->next == NULL) {
        cout << head->data << endl;
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}

int Node::size = 0;

int main() {
    Node* node1 = new Node(30);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    print(head);

    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    print(head);

    insertAtPosition(head, tail, 2, 5);
    insertAtPosition(head, tail, 4, 100);
    print(head);

    deleteNode(1, head, tail);
    deleteNode(3, head, tail);
    print(head);

    int sizeOfLL = getLength();
    cout << sizeOfLL << endl;
}