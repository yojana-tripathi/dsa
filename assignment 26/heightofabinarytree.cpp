class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {  
        if(!root) return 0;
        return 0-max(height(root->left) ,height(root->right));
       
        
    }
