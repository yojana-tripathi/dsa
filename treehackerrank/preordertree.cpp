 void preOrder(Node *root) {
        queue<Node*>Q;
        if(root==NULL) return ;
        Q.push(root);
        while(!Q.empty()){
            Node* temp = Q.front();
            cout<<temp->data<<" ";
            Q.pop();
            if(temp->left != NULL){
               preOrder(temp->left);
            }
            
            if(temp->right!= NULL){
                preOrder(temp->right);
            }
        }
    }
