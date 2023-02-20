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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()){
             vector<int>level;
            int size = Q.size();
            for(int i=0; i<size; i++){
            TreeNode* temp = Q.front();
              level.push_back(temp->val);
            Q.pop();
              if(temp->left !=NULL) Q.push(temp->left);
              if(temp->right != NULL) Q.push(temp->right);
                //   level.push_back(temp->val);
              }
                     ans.push_back(level);
                    // reverse(ans.begin(),ans.end());

                }
                 reverse(ans.begin(),ans.end());
                return ans;
            
        }
        

};
