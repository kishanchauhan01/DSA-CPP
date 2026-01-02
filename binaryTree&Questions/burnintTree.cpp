// https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/

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
    TreeNode* createParentMapping(TreeNode* root, int target,
                             map<TreeNode*, TreeNode*>& nodeToParent) {

        TreeNode* res = NULL;
        queue<TreeNode*> q;
        q.push(root);

        nodeToParent[root] = NULL;

        while (!q.empty()) {
            TreeNode* front = q.front();
            q.pop();

            if (front->val == target) {
                res = front;
            }

            if (front->left) {
                nodeToParent[front->left] = front;
                q.push(front->left);
            }

            if (front->right) {
                nodeToParent[front->right] = front;
                q.push(front->right);
            }

        }
            return res;
    }

    int infectTree(TreeNode* root, map<TreeNode*, TreeNode*>& nodeToParent) {
        map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(root);
        visited[root] = 1;

        int ans = 0;

        while(!q.empty()) {
            int size = q.size();
            bool flag = 0;

            for(int i=0; i<size; i++) {
                TreeNode* front = q.front();
                q.pop();

                if(front->left && !visited[front->left]) {
                    flag = 1;
                    q.push(front->left);
                    visited[front->left] = 1;
                }

                if(front->right && !visited[front->right]) {
                    flag = 1;
                    q.push(front->right);
                    visited[front->right] = 1;
                }

                if(nodeToParent[front] && !visited[nodeToParent[front]]) {
                    flag = 1;
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = 1;
                }
            }

            if(flag) ans++;
        }

        return ans;
    }

public:
    int amountOfTime(TreeNode* root, int start) {
        // step1: nodeToParent mapping
        // step2: maintain isVisited map <Node*, bool>
        // step3: maintain queue for updating time

        map<TreeNode*, TreeNode*> nodeToParent;
        TreeNode* targetNode = createParentMapping(root, start, nodeToParent);

        int ans = infectTree(targetNode, nodeToParent);

        return ans;        

    }
};