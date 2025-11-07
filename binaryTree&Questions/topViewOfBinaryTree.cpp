//https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
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

class Solution {
   public:
    vector<int> topView(Node* root) {
        // code here
        vector<int> ans;
        if (root == NULL) return ans;

        map<int, int> nodes;
        queue<pair<Node*, int>> q;

        q.push(make_pair(root, 0));

        while (!q.empty()) {
            pair<Node*, int> temp = q.front();
            q.pop();

            int hd = temp.second;
            Node* frontNode = temp.first;

            if (!nodes[hd]) {
                nodes[hd] = frontNode->data;
            }

            if (frontNode->left) q.push(make_pair(frontNode->left, hd - 1));

            if (frontNode->right) q.push(make_pair(frontNode->right, hd + 1));
        }

        for (auto& i : nodes) {
            ans.push_back(i.second);
        }

        return ans;
    }
};

int main() {
    Node* root = NULL;

    root = buildTree(root);

    Solution* s = new Solution();
    vector<int> result = s->topView(root);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}