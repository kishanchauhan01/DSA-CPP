// https://leetcode.com/problems/balance-a-binary-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
private:
    vector<int> inorderVal;

    void inOrder(TreeNode* root) {
        if (root == NULL)
            return;

        inOrder(root->left);
        inorderVal.push_back(root->val);
        inOrder(root->right);
    }

    TreeNode* inorderToBST(int s, int e) {
        if (s > e)
            return NULL;

        int mid = (s + e) / 2;
        TreeNode* root = new TreeNode(inorderVal[mid]);

        root->left = inorderToBST(s, mid - 1);
        root->right = inorderToBST(mid + 1, e);

        return root;
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        inOrder(root);
        return inorderToBST(0, inorderVal.size() - 1);
    }
};