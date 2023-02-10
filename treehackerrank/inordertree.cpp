/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void inOrder(Node *root) {
        queue<Node*>Q;
        if(root==NULL)return;
        Q.push(root);
        while(!Q.empty()){
            Node* temp= Q.front();
            if(temp->left !=NULL){
                inOrder(temp->left);
            }
            
            cout<<temp->data<<" ";
            Q.pop();
            
            if(temp->right!= NULL){
                inOrder(temp->right);
            }
        }

    }
