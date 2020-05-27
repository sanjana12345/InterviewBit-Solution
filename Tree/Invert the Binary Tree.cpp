/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void check (TreeNode * A)
{
    if(A==NULL)
    return ;
    
    check(A->left);
    check(A->right);
    TreeNode* temp;
    temp=A->left;
    A->left=A->right;
    A->right=temp;
}
TreeNode* Solution::invertTree(TreeNode* A) {
    check(A);
    return A;
}
