/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool chck(TreeNode*A,int B)
 {
     if(!A) return false;
     if(A->val==B) return true;
     
     else return chck(A->left,B)||chck(A->right,B);
 }
 
int solve(TreeNode* A, int B, int C){
    if(A==NULL) return -1;
    if(A->val==B || A->val==C) return A->val;
    int leftAns = solve(A->left,B,C);
    int rightAns = solve(A->right,B,C);
    if(leftAns!=-1 && rightAns!=-1) return A->val;
    else if(leftAns!=-1 && rightAns==-1) return leftAns;
    else if(leftAns==-1 && rightAns!=-1) return rightAns;
    else return -1;
}
 
int Solution::lca(TreeNode* A, int B, int C) {
    int both_exist=0;
    both_exist=chck(A,B)&&chck(A,C);
    int ans=solve(A,B,C);

   if(ans!=-1 && both_exist) return ans;
   return -1;
}

