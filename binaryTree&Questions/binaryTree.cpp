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
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of" << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of" << data << endl;
    root->right = buildTree(root->right);
    return root;
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

void reverseLevelOrderTraversal(Node* root) {
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        s.push(temp);

        if (temp == NULL) {
            if (!q.empty()) q.push(NULL);
        }

        else {
            if (temp->right) {
                q.push(temp->right);
            }

            if (temp->left) {
                q.push(temp->left);
            }
        }
    }

    while (!s.empty()) {
        if (s.top() == NULL) {
            cout << endl;
            s.pop();
        } else {
            cout << s.top()->data << " ";
            s.pop();
        }
    }
    cout << endl;
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

void preOrder(Node* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root) {
    if (root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(Node* root) {
    queue<Node*> q;
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1) {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1) {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main() {
    Node* root = NULL;

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    root = buildTree(root);

    cout << "level order traversing" << endl;

    // levelOrderTraversal(root);
    // reverseLevelOrderTraversal(root);

    cout << endl << "Inorder traversal is: " << endl;
    inOrder(root);
    cout << endl;

    cout << endl << "Preorder traversal is: " << endl;
    preOrder(root);
    cout << endl;

    cout << endl << "Postorder traversal is: " << endl;
    postOrder(root);
    cout << endl;

    return 0;
}
