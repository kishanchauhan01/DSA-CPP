// https://www.naukri.com/code360/problems/two-sum-in-a-bst_1062631?leftPanelTab=0

#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
***************/
void inOrder(BinaryTreeNode<int>* root, vector<int> &inOrderVal) {
    BinaryTreeNode<int>* curr = root;

    while(curr != NULL) {
        if(curr->left == NULL) {
            inOrderVal.push_back(curr->data);
            curr = curr->right;
        }

        else {
            BinaryTreeNode<int>* prev = curr->left;
            while(prev->right != NULL && prev->right != curr) {
                prev = prev->right;
            }

            if(prev->right == NULL) {
                prev->right = curr;
                curr = curr->left;
            }

            else {
                prev->right = NULL;
                inOrderVal.push_back(curr->data);
                curr = curr->right;
            }
        }  
    }
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int> inOrderVal;
    inOrder(root, inOrderVal);

    int i = 0, j = inOrderVal.size()-1;

    while(i<j) {
        int sum = inOrderVal[i]+inOrderVal[j];
        if(sum == target) {
            return true;
        }

        else if(sum > target) {
            j--;
        }

        else {
            i++;
        }
    }

    return false;
}