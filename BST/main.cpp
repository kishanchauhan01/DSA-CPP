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

Node* insertIntoBst(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    if (data > root->data) {
        root->right = insertIntoBst(root->right, data);
    }

    else {
        root->left = insertIntoBst(root->left, data);
    }

    return root;
}

void takeInput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoBst(root, data);
        cin >> data;
    }
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

Node* minVal(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* maxVal(Node* root) {
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

void inOrder(Node* root) {
    // base case

    if (root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Node* deleteFromBST(Node* root, int val) {
    // base case
    if (root == NULL) return root;

    if (root->data == val) {
        // 0 child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // 1 child

        // left child
        if (root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        if (root->right != NULL && root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right == NULL) {
            // take the max val from the left sub tree and replace it with the
            // root value and delete that max value from the left subtree

            // take the min vla from the right sub tree and replace it with the
            // root value and delete that value from the right subtree

            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }

    else if (root->data > val) {
        root->left = deleteFromBST(root->left, val);
        return root;
    }

    else {
        root->right = deleteFromBST(root->right, val);
        return root;
    }

    return root;
}

int main() {
    Node* root = NULL;

    // 10 7 15 5 9 17 16 19 -1
    cout << "Enter data to create BST" << endl;
    takeInput(root);
    levelOrderTraversal(root);

    cout << "inoreder: " << endl;
    inOrder(root);

    // cout << "Min value: " << minVal(root)->data << endl;
    // cout << "Max value: " << maxVal(root)->data << endl;

    // leaf node case
    // deleteFromBST(root, 19);

    // only one node
    // deleteFromBST(root, 15);

    // both nodes
    root = deleteFromBST(root, 10);

    cout << endl;
    cout << "After deletion" << endl;

    levelOrderTraversal(root);
    inOrder(root);
    return 0;
}