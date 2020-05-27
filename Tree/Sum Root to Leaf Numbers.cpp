/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int find(TreeNode *A, int &sum)
 {
     if(!A)
     return 0;
     sum=(((sum%1003)*10)%1003+(A->val)%1003)%1003;
     if(A->left==NULL && A->right==NULL)
     return sum;
     return find((A->left,sum)%1003+find(A->right, sum)%1003)%1003;
 }
int Solution::sumNumbers(TreeNode* A) {
    int sum=0;
   find(A,sum);
   return sum;
   
}
