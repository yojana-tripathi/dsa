class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> p;
        stack<TreeNode*> S;
        while(root!=NULL || !S.empty()){
            while(root){
             p.push_back(root->val);
                S.push(root);
                root=root->right;
            }
                root=S.top();
                S.pop();
                // p.push_back(root->val);
                root=root->left;
        }
        reverse(p.begin(),p.end());
        return p;
        
        }
};

