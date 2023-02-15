class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()){
            int size = Q.size();
            vector<int>level;
            for(int i=0; i<size; i++){
            TreeNode* temp = Q.front();
             Q.pop();
              if(temp->left !=NULL) Q.push(temp->left);
              if(temp->right != NULL) Q.push(temp->right);
                  level.push_back(temp->val);
              }
                    ans.push_back(level);   
                }
                return ans;
            }
};
