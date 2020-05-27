/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool check(TreeNode* A , TreeNode* B)
{
if (A==NULL && B==NULL)
        return 1;
 
    if (A!=NULL && B!=NULL)
    {
        return
        (
            A->val == B->val &&
            check(A->left, B->right) &&
            check(A->right, B->left)
        );
    }
     
    return 0;
} 
int Solution::isSymmetric(TreeNode* A) {
check(A, A);

}
