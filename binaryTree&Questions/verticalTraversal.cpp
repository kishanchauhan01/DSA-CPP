#include <bits/stdc++.h>

#include <iostream>
using namespace std;

//   Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right) {}
};

class Solution {
   public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>>
            nodes;  // firs int is for horizontal distance, second int is for

        queue<pair<TreeNode*, pair<int, int>>>
            q;  // level order, and vector for storing nodes
        vector<vector<int>> result;

        q.push(make_pair(root, make_pair(0, 0)));

        while (!q.empty()) {
            pair<TreeNode*, pair<int, int>> temp = q.front();
            q.pop();

            TreeNode* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            nodes[hd][lvl].insert(frontNode->val);

            if (frontNode->left)
                q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));

            if (frontNode->right)
                q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
        }

        for (auto& hd_pair : nodes) {
            vector<int> col;
            for (auto& lvl_pair : hd_pair.second) {
                col.insert(col.end(), lvl_pair.second.begin(),
                           lvl_pair.second.end());
            }

            result.push_back(col);
        }

        return result;
    }
};
