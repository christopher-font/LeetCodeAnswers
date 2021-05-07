int minDepth(struct TreeNode* root){
    if (!root)
        return 0;
    
    if (!root->left) 
        return 1 + minDepth(root->right);
    if (!root->right) 
        return 1 + minDepth(root->left);
    
    int r = minDepth(root->right);
    int l = minDepth(root->left);
    return l < r ? ++l : ++r;
}