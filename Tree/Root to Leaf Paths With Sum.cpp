/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int find(TreeNode *A, vector<vector<int> >&sol, vector<int> &v, int sum)
{
    if(sum==0 && A->left==NULL && A->right==NULL)
     sol.push_back(v);
     
     if(A->left!=NULL){
         v.push_back((A->left)->val);
         find(A->left, sol,v,sum-(A->left)->val);
         v.pop_back();
     }
     if(A->right!=NULL)
     {
         v.push_back((A->right)->val);
         find(A->right, sol, v, sum-(A->right)->val);
         v.pop_back();
     }
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int> >sol;
    vector<int> v;
    v.push_back(A->val);
    find(A, sol,v, B-A->val);
     return sol;
}
