//https://www.naukri.com/code360/problems/reverse-list-in-k-groups_983644?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan


/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

int getLength(Node* head) {
  Node* temp = head;
  if(temp == NULL) {
    return 0;
  }
  int length = 1;
  while(temp -> next != NULL) {
    temp = temp -> next;
    length++;
  }

  return length;
}

Node *kReverse(Node *head, int k) {
  // base case
  if (head == NULL) {
    return NULL;
  }

  if(getLength(head) < k) {
    return head;
  }
  

  // step1: reverse first k nodes
  Node *next = NULL;
  Node *curr = head;
  Node *prev = NULL;
  int count = 0;

  while (curr != NULL && count < k) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }

  // step2: recursion dekhlega aage ka

  if (next != NULL) {
    head->next = kReverse(next, k);
  }

  // step3: return head of reversed list

  return prev;
}