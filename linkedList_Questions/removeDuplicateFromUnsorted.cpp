#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

//https://www.naukri.com/code360/problems/remove-duplicates-from-unsorted-linked-list_1069331?source=youtube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan&count=25&page=1&search=split%20cir&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM


class Node {
    public:
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }

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

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

Node *removeDuplicates(Node* &head) {
    Node* curr = head;
    while(curr != NULL) {
        Node* prev = curr;
        Node* temp = curr -> next;
        while(temp != NULL) {
            if(curr -> data == temp -> data) {
                Node* next_next = temp -> next;
                delete temp;
                prev -> next = next_next;
                temp = next_next;
            }

            else{
                temp = temp -> next;
                prev = prev -> next;
            }
        }
        curr = curr -> next;
    }

    return head;
    
}

int main() {

    Node* head = NULL;
// 1 2 1 2 2 2 7 7 -1

    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 7);
    insertAtHead(head, 7);
    insertAtHead(head, -1);
    print(head);

    removeDuplicates(head);
    print(head);

    return 0;
}