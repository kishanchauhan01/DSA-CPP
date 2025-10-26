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
    void traverseLeft(Node *root, vector<int> &ans) {
        if(root == NULL || (root->left == NULL && root->right == NULL)) {
            return;
        }
        
        ans.push_back(root->data);
        if(root->left) traverseLeft(root->left, ans);
        else traverseLeft(root->right, ans);
    }
    
    void traverseLeaf(Node* root, vector<int> &ans) {
        if(root == NULL) {
            return ;
        }
        
        if(root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
        }
        
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }
    
    void traverseRight(Node* root, vector<int> &ans) {
        if(root == NULL || (root->left == NULL && root->right == NULL)) {
            return;
        }
        
        if(root->right) traverseRight(root->right, ans);
        else traverseRight(root->left, ans);
        
        ans.push_back(root->data);
    }
  
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        ans.push_back(root->data);
        if(root->left == NULL && root->right == NULL) return ans;
        traverseLeft(root->left, ans);
        
        traverseLeaf(root, ans);
        
        traverseRight(root->right, ans);
        
        return ans;
        
        
    }
};