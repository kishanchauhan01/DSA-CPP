#include<iostream>
using namespace std;
#include<bits/stdc++.h>

 Definition of doubly linked list:
 class Node {
 public:
      int data;
      Node *prev;
      Node *next;
      Node() {
          this->data = 0;
          this->prev = NULL;
          this->next = NULL;
      }
      Node(int data) {
          this->data = data;
          this->prev = NULL;
          this->next = NULL;
      }
      Node (int data, Node *next, Node *prev) {
          this->data = data;
          this->prev = prev;
          this->next = next;
};
 


Node * removeDuplicates(Node *head)
{
    // empty list
    if(head == NULL) {
        return NULL;
    }

    //non empty list
    Node* curr = head;

    while(curr -> next != NULL) {
        if(curr -> data == curr -> next -> data) {
            Node* next_next = curr -> next -> next;
            Node* nodeTodelete = curr -> next;
            delete(nodeTodelete);
            curr -> next = next_next;
        }
        else {
            curr = curr -> next;
        }
    }

    return head;

}
