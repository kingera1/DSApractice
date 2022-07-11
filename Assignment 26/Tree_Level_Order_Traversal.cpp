  void levelOrder(Node * root) {
        queue<Node*>Q;
        Q.push(root);
        while(!Q.empty()){
            Node*temp = Q.front();
            cout<<temp->data<<" ";
            if(temp->left) Q.push(temp->left);
            if(temp->right) Q.push(temp->right);
            Q.pop();
            
        }

    }
