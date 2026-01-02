#include <vector>
#include <iostream>
using namespace std;

// Node Structure
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* rightMost(Node* node) {
    while (node->right)
        node = node->right;
    return node;
}

Node* leftMost(Node* node) {
    while (node->left)
        node = node->left;
    return node;
}

// return vector with predecessor at index 0 
// and successor at index 1
vector<Node*> findPreSuc(Node* root, int key) {
    Node* pre = NULL;
    Node* suc = NULL;
    Node* curr = root;

    while (curr) {
        if (curr->data < key) {
            pre = curr;
            
            // look for predecessor with greater value
            curr = curr->right;
        } else if (curr->data > key) {
            suc = curr;
            
            // look for successor with smaller value
            curr = curr->left;
        } else {
            if (curr->left)
                pre = rightMost(curr->left);
            if (curr->right)
                suc = leftMost(curr->right);
            break;
        }
    }

    return {pre, suc};
}

int main() {
    int key = 65;

    // Create BST:
    //      50 
    //     /  \
    //   30     70
    //   / \    / \
    // 20  40  60  80
    
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    vector<Node*> result = findPreSuc(root, key);
    Node* pre = result[0];
    Node* suc = result[1];

    cout << (pre ? to_string(pre->data) : "NULL") << " ";
    cout << (suc ? to_string(suc->data) : "NULL");
}
