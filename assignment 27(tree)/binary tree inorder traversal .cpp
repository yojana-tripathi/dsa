class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> p;
        stack<TreeNode*> S;
        while(root!=NULL || !S.empty()){
            if(root!=NULL){
                // p.push_back(root->val);
                S.push(root);
                root=root->left;
            }
            else {
                root=S.top();
                S.pop();
                p.push_back(root->val);
                root=root->right;
            }
        }
        return p;
    }
};

