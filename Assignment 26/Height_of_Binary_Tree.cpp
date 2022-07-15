int height(Node* root) {
         if(root==NULL)
        return -1;

    queue<Node*>q;
    q.push(root);
    int count= 0;

    while(!q.empty()){
        int size=q.size();
        while(size--){
            Node* temp=q.front();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            q.pop();
        }
        count++;
    }
    return count-1;
}
