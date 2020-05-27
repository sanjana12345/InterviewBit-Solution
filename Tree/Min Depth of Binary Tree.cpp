int Solution::minDepth(TreeNode* A) {
    //return depth(A);
    if(!A)
    return 0;
    return 1+min(minDepth(A->left), minDepth(A->right));
    
}
