// https://www.geeksforgeeks.org/problems/merge-two-bst-s/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
   private:
    void convertIntoSortedDLL(Node* root, Node*& head) {
        // base case
        if (root == NULL) return;

        convertIntoSortedDLL(root->right, head);

        root->right = head;

        if (head != NULL) head->left = root;

        head = root;

        convertIntoSortedDLL(root->left, head);
    }

    Node* mergeTwoSortedLL(Node* head1, Node* head2) {
        Node* head = NULL;
        Node* tail = NULL;

        while (head1 != NULL && head2 != NULL) {
            if (head1->data < head2->data) {
                if (head == NULL) {
                    head = head1;
                    tail = head1;
                    head1 = head1->right;

                } else {
                    tail->right = head1;
                    head1->left = tail;
                    tail = head1;
                    head1 = head1->right;
                }

            } else {
                if (head == NULL) {
                    head = head2;
                    tail = head2;
                    head2 = head2->right;

                } else {
                    tail->right = head2;
                    head2->left = tail;
                    tail = head2;
                    head2 = head2->right;
                }
            }
        }

        while (head1 != NULL) {
            tail->right = head1;
            head1->left = tail;
            tail = head1;
            head1 = head1->right;
        }

        while (head2 != NULL) {
            tail->right = head2;
            head2->left = tail;
            tail = head2;
            head2 = head2->right;
        }

        return head;
    }

    int countNodes(Node* head) {
        int cnt = 0;
        Node* temp = head;

        while (temp != NULL) {
            cnt++;
            temp = temp->right;
        }

        return cnt;
    }

    Node* sortedLLToBST(Node*& head, int n) {
        // basecase
        if (n <= 0 || head == NULL) {
            return NULL;
        }

        Node* left = sortedLLToBST(head, n / 2);
        Node* root = head;
        root->left = left;

        head = head->right;

        root->right = sortedLLToBST(head, n - n / 2 - 1);

        return root;
    }

    void inOrder(Node* root, vector<int>& in) {
        if (root == NULL) return;

        inOrder(root->left, in);
        in.push_back(root->data);
        inOrder(root->right, in);
    }

   public:
    vector<int> merge(Node* root1, Node* root2) {
        vector<int> inVal;
        Node* head1 = NULL;
        convertIntoSortedLL(root1, head1);
        head1->left = NULL;

        Node* head2 = NULL;
        convertIntoSortedLL(root2, head2);
        head2->left = NULL;

        Node* head = mergeTwoSortedLL(head1, head2);

        Node* root = sortedLLToBST(head, countNodes(head));

        inOrder(root, inVal);

        return inVal;
    }
};