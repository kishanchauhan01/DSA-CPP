//https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> ans;
        if(root == NULL) 
            return ans;
            
        map<int, int> nodes;
        queue<pair<Node*, int>> q;
        
        q.push(make_pair(root, 0));
        
        while(!q.empty()) {
            pair<Node*, int> temp = q.front();
            q.pop();
            
            int hd = temp.second;
            root = temp.first;
            
            if(nodes[hd]) {
                nodes[hd] = root->data;
            } 
            else {
                nodes[hd] = root->data;
            }
            
            if(root->left) 
                q.push(make_pair(root->left, hd-1));
                
            if(root->right)
                q.push(make_pair(root->right, hd+1));
        }
        
        for(auto i:nodes) {
            ans.push_back(i.second);
        }
        
        return ans;
    }
};






