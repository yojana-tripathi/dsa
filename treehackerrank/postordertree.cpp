void postOrder(Node *root) {
        queue<Node*>Q;
        if(root ==NULL) return;
            Q.push(root);
            while(!Q.empty()){
              Node* temp= Q.front();
               // cout<<temp->data<<" ";
                if(temp->left!= NULL){
                postOrder(temp->left);
                }
                if(temp->right!= NULL){
                    postOrder(temp->right);
                }
                
                 cout<<temp->data<<" ";
                 Q.pop();
            }
        

    }
