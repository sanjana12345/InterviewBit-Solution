/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int check(TreeNode *A, int sum)
 {    if(!A)
      return 0;
     if(A->val==sum && A->left==NULL && A->right==NULL)
       return 1;
       return max(check(A->left, sum-A->val), check(A->right, sum-A->val));
     
 }
int Solution::hasPathSum(TreeNode* A, int B) {
    return check(A,B);
}
