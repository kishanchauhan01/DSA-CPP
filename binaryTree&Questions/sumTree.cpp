// Tree node

#include <bits/stdc++.h>

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

// Should return true if tree is Sum Tree, else false
class Solution {
   private:
    pair<bool, int> solve(Node* root) {
        if (root == NULL) {
            return make_pair(true, 0);
        }

        if (root->left == NULL && root->right == NULL) {
            return make_pair(true, root->data);
        }

        pair<bool, int> left = solve(root->left);
        pair<bool, int> right = solve(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;

        bool isSum = (left.second + right.second) == root->data;

        pair<bool, int> ans;
        ans.second = left.second + right.second + root->data;

        if (leftAns && rightAns && isSum) {
            ans.first = true;
        } else {
            ans.first = false;
        }

        return ans;
    }

   public:
    bool isSumTree(Node* root) {
        // Your code here
        return solve(root).first;
    }
};