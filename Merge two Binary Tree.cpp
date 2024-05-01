/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode*construct(TreeNode* A, TreeNode* B){
    if(A && B){
        A->val=A->val +  B-> val;
        A->left=construct(A->left,B->left);
        A->right=construct(A->right,B->right);
        return A;
    }
    if(A) return A;
    if(B) return B;
    return NULL;
}
 
TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    return construct(A,B);
}
