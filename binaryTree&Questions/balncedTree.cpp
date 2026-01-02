// https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
   private:
    pair<bool, int> isBalancedFast(Node* root) {
        // base case
        if (root == NULL) {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<bool, int> left = isBalancedFast(root->left);
        pair<bool, int> right = isBalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;

        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        if (leftAns && rightAns && diff) {
            ans.first = true;
        } else {
            ans.first = false;
        }

        return ans;
    }

   public:
    bool isBalanced(Node* root) {
        // Code here
        return isBalancedFast(root).first;
    }
};