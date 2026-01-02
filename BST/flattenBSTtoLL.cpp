// https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1

/*
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  private:
    Node* prev = NULL;
    Node* head = NULL;
    
    void inOrder(Node* root) {
        //base case
        if(!root) return;
        
        inOrder(root->left);
        
        if(prev == NULL) {
            head = root;
        } else {
            prev->right = root;
        }
        
        root->left = NULL;
        prev = root;
        
        inOrder(root->right);
    }
    
  public:
    Node *flattenBST(Node *root) {
        // code here
        inOrder(root);
        return head;
    }
};