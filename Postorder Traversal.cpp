/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void f(TreeNode* A, vector<int> &ans){
     if(A==NULL) return;
     f(A->left,ans);
     f(A->right,ans);
     ans.push_back(A->val);
 }
 
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ans;
    f(A,ans);
    return ans;
}

