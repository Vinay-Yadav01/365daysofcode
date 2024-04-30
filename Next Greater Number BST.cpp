/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::getSuccessor(TreeNode* A, int B) {
    TreeNode* successor = nullptr;
    while (A) {
        if (A->val <= B) {
            A = A->right; // Move to the right subtree
        } else {
            successor = A; // Current node could be a successor
            A = A->left;  // Move to the left subtree
        }
    }
    return successor;

}
