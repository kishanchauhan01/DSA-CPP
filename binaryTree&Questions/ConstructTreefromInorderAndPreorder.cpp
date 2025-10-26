#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
   private:
    int findIndex(vector<int>& inorder, int data, int s, int e) {
        int index = -1;
        for (int i = s; i <= e; i++) {
            if (inorder[i] == data) return i;
        }
        return -1;
    }

    Node* solve(Node* root, vector<int>& inorder, vector<int>& preorder,
                int& preIndex, int s, int e) {
        if (preIndex >= preorder.size() || s > e) {
            return NULL;
        }

        int data = preorder[preIndex++];
        root = new Node(data);

        int inIndex = findIndex(inorder, data, s, e);

        root->left = solve(root, inorder, preorder, preIndex, s, inIndex - 1);
        root->right = solve(root, inorder, preorder, preIndex, inIndex + 1, e);

        return root;
    }

   public:
    Node* buildTree(vector<int>& inorder, vector<int>& preorder) {
        // code here
        Node* root = NULL;
        int preIndex = 0;

        root = solve(root, inorder, preorder, preIndex, 0, preorder.size() - 1);
        return root;
    }
};

void postOrder(Node* root) {
    if (root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {  // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }

            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
    cout << endl;
}

int main() {
    vector<int> inorder = {2, 5, 4, 1, 3};
    vector<int> preorder = {1, 4, 5, 2, 3};

    Solution s;

    Node* root = s.buildTree(inorder, preorder);
    // postOrder(root);
    levelOrderTraversal(root);

    return 0;
}