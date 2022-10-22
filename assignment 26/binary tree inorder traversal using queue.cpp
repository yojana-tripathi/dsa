/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int>s;
    vector<int> inorderTraversal(TreeNode* root) {
        queue<TreeNode*>Q;
        TreeNode*temp;
        if(root==NULL) return s;
        Q.push(root);
        while(!Q.empty()){
            temp=Q.front();
            Q.pop();
            if(temp->left!=NULL) {
                inorderTraversal(temp->left);
            }
             s.push_back(temp->val);
            if(temp->right!=NULL){
                inorderTraversal(temp->right);
            }
        }
        return s;
    }
};

