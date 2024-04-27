/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void solve(vector<int>& ans, TreeNode* A){
    if(A==NULL) return;
    solve(ans,A->left);
    ans.push_back(A->val);
    solve(ans,A->right);
 }
 
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    solve(ans,A);
    return ans;
}
