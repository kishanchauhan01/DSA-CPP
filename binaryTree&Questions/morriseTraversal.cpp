#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root) {
    cout << "Enter the data: " << endl;
    string data;
    cin >> data;

    if (data == "N") {
        return NULL;
    }

    root = new Node(stoi(data));

    cout << "Enter data for inserting in left of: " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of: " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

vector<int> morrisTraversal(Node* root) {
    vector<int> ans;
    Node* curr = root;

    while (curr != NULL) {
        if (curr->left == NULL) {
            ans.push_back(curr->data);
            curr = curr->right;
        }

        else {
            Node* prev = curr->left;
            while (prev->right != NULL && prev->right != curr) {
                prev = prev->right;
            }

            if (prev->right == NULL) {
                prev->right = curr;
                curr = curr->left;
            }

            else {
                prev->right = NULL;
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }

    return ans;
}

int main() {
    // 1 2 4 N 7 N N 5 N N 3 N 6 N N
    Node* root = NULL;
    root = buildTree(root);
    vector<int> inOrder = morrisTraversal(root);

    for (auto i : inOrder) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}