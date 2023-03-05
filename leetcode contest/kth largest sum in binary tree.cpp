 long long kthLargestLevelSum(TreeNode* root, int k) {
          TreeNode* temp = new TreeNode;
        temp->left = nullptr;
         temp->right = nullptr;
         if(root == nullptr) return 0;
           queue<TreeNode*>Q;
           Q.push(root);
           int level  =0;
           int sum = 0;
             int count = 0;
        while (!Q.empty()) {
            int size = Q.size();
                while(size--){
                    TreeNode * ptr = Q.front();
                    Q.pop();
                    if(level==k){
                        count =1;
                        sum+=ptr->val;
                    }
                    else{
                        if(ptr->left) Q.push(ptr->left);
                        if(ptr->right)Q.push(ptr->right);
                    }
                }
            level++;
            if(count == 1)
                break;
      }
    return sum;
        
    }
};
