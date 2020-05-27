 int height(TreeNode* node)
{
   if(node == NULL)
       return 0;
 
   return 1 + max(height(node->left), height(node->right));
} 

 
int Solution::isBalanced(TreeNode* A) {


   int lh; 
   int rh; 
 
   if(A == NULL)
    return 1; 
 
   /* Get the height of left and right sub trees */
   lh = height(A->left);
   rh = height(A->right);
 
   if( abs(lh-rh) <= 1 &&
       isBalanced(A->left) &&
       isBalanced(A->right))
     return 1;
 
   /* If we reach here then tree is not height-balanced */
   return 0;
}

