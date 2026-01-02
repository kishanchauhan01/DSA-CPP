// https://leetcode.com/problems/delete-node-in-a-bst/submissions/1823382129/

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
    TreeNode* minVal(TreeNode* root) {
        while (root->left != NULL) {
            root = root->left;
        }
        return root;
    }

    TreeNode* solve(TreeNode* root, int key) {
        if (root == NULL) return NULL;

        if (root->val == key) {
            // 0 child
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }

            // 1 child

            // left child
            if (root->left != NULL && root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // right child
            if (root->right != NULL && root->left == NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // 2 child
            if (root->left != NULL && root->right != NULL) {
                int mini = minVal(root->right)->val;
                root->val = mini;
                root->right = solve(root->right, mini);
                return root;
            }
        }

        else if (root->val > key) {
            root->left = solve(root->left, key);
            return root;
        }

        else {
            root->right = solve(root->right, key);
            return root;
        }

        return root;
    }

   public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        root = solve(root, key);
        return root;
    }
};