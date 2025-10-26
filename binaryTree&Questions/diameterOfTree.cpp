// https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1

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
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) { return new Node(val); }

class Solution {
   private:
    pair<int, int> diameterFast(Node* root) {
        // base case
        if (root == NULL) {
            pair<int, int> p = make_pair(0, 0);
            return p;
        }

        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;

        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second, right.second) + 1;

        return ans;
    }

   public:
    int diameter(Node* root) {
        // code here
        return diameterFast(root).first - 1;
    }
};