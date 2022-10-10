class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> p;
        stack<TreeNode*> S;
        while(root!=NULL || !S.empty()){
            if(root!=NULL){
                p.push_back(left->val);
                S.push(root);
                left=root->left;
            }
            else{
                root=S.top();
                S.pop();
                root=root->left;
            }
        }
        return p;
    }
};
