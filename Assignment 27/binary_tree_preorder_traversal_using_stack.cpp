class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> o;
        stack<TreeNode*>s;
        if (root == NULL) return o;
        while(root!=NULL || !s.empty()){
            if(root!=NULL){
                o.push_back(root->val);
                s.push(root);
                root=root->left;
            }
            else{
                root=s.top();
                s.pop();
                root=root->right;
            }
        }
        return o;
    }
};
