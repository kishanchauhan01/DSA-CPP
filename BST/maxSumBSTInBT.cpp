// https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/description/
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right) {}
};

class info {
   public:
    int maxi;
    int mini;
    bool isBST;
    int sum;
};

info solve(TreeNode* root, int& ans) {
    if (root == NULL) {
        return {INT_MIN, INT_MAX, true, 0};
    }

    info left = solve(root->left, ans);
    info right = solve(root->right, ans);

    info currNode;

    currNode.maxi = max(root->val, right.maxi);
    currNode.mini = min(root->val, left.mini);

    if (left.isBST && right.isBST &&
        (root->val > left.maxi && root->val < right.mini)) {
        currNode.isBST = true;
    } else {
        currNode.isBST = false;
    }

    if (currNode.isBST) {
        int tempSum = root->val + left.sum + right.sum;
        cout << "Node:- " << root->val << "Sum:-" << tempSum << endl;
        currNode.sum = tempSum;
        ans = max(ans, currNode.sum);
    }

    return currNode;
}

class Solution {
   public:
    int maxSumBST(TreeNode* root) {
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};