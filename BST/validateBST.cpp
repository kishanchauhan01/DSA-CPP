// https://leetcode.com/problems/validate-binary-search-tree/description/

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
    bool isBST(TreeNode* root, long long int min, long long int max) {
        if (root == NULL) {
            return true;
        }

        if (root->val > min && root->val < max) {
            bool left = isBST(root->left, min, root->val);
            bool right = isBST(root->right, root->val, max);
            // cout << left << " " << right << endl;
            return left && right;
        }

        else {
            return false;
        }
    }

   public:
    bool isValidBST(TreeNode* root) {
        return isBST(root, LLONG_MIN, LLONG_MAX);
    }
};