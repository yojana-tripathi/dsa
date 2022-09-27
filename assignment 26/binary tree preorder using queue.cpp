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
    vector<int> preorderTraversal(TreeNode* root) {
        queue<TreeNode*>Q;
        TreeNode*temp;
        if(root==NULL) return s;
        Q.push(root);
        while(!Q.empty()){
            temp=Q.front();
            Q.pop();
            s.push_back(temp->val);
            if(temp->left!=NULL) {
                preorderTraversal(temp->left);
            }
            if(temp->right!=NULL){
                preorderTraversal(temp->right);
            }
        }
        return s;
    }
};
