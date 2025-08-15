#include <bits/stdc++.h>
#include <iostream> 
using namespace std;

//https://www.naukri.com/code360/problems/reverse-the-singly-linked-list_799897

template <typename T>
class LinkedListNode {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data) {
            this->data = data;
            this->next = NULL;
        }
};



LinkedListNode<int>* reverse1(LinkedListNode<int>* &head) {
  //base case
  if(head == NULL || head -> next == NULL) 
    return head;

  LinkedListNode<int>* chotaHead = reverse1(head -> next);

  head -> next -> next = head;
  head -> next = NULL;

  return chotaHead;

}

void reverse(LinkedListNode<int> *&head, LinkedListNode<int> *&curr,
             LinkedListNode<int> *&prev) {

  // base case
  if (curr == NULL) {
    head = prev;
    return;
  }

  LinkedListNode<int> *forward = curr->next;
  reverse(head, forward, curr);
  curr->next = prev;
}


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int>* &head) {

  // return reverse1(head);

  
  // LinkedListNode<int> *curr = head;
  // LinkedListNode<int> *prev = NULL;
  // reverse(head, curr, prev);
  // return head;
  

  if(head == NULL || head -> next == NULL) {
      return head;
  }

  LinkedListNode<int>* prev = NULL;
  LinkedListNode<int>* curr = head;
  LinkedListNode<int>* forward = NULL;

  while(curr != NULL) {
      forward = curr -> next;
      curr -> next = prev;
      prev = curr;
      curr = forward;
  }

  return prev;

}

void insertAtHead(LinkedListNode<int>* &head, int d) {
    LinkedListNode<int>* temp = new LinkedListNode(d);

    temp -> next = head;
    head = temp;

}

void print(LinkedListNode<int>* head) {
    LinkedListNode<int>* temp = head;
    cout << temp -> data << endl;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    LinkedListNode<int>* node1 = new LinkedListNode(1);
    LinkedListNode<int>* head = node1;

    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    print(head);

    reverseLinkedList(head);
    cout << "after reversing" << endl;
    print(head);


    return 0;
}