/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if(A==NULL) return 0;
    int leftTree = maxDepth(A->left);
    int righttTree = maxDepth(A->right);
    return max(leftTree, righttTree)+1;
}
