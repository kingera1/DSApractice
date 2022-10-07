class Solution {
public:
   bool validBST(TreeNode* root,long long a,long long b)
    {
        if(!root)
            return true;
        if(root->val<=a || root->val>=b)
            return false;
        int left = validBST(root->left,a,root->val);
        int right = validBST(root->right,root->val,b);
        
        return (left && right);
    }
    bool isValidBST(TreeNode* root) {
        
        return validBST(root,LONG_MIN,LONG_MAX);
    }
};
