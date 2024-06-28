/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 
TreeNode* Solution::invertTree(TreeNode* A) {
    if(A==NULL) return NULL;
    if(A->left==NULL && A->right==NULL) return A;
   
    TreeNode* tmp=A->left;
    A->left=A->right;
    A->right=tmp;
   
    invertTree(A->left);
    invertTree(A->right);
    return A;
}
