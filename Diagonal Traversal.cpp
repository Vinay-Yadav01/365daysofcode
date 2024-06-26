/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    vector<int> ans;
    queue<TreeNode*> q; //Tracking of Left of any node
    q.push(A);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        while(temp){
            q.push(temp->left);
            ans.push_back(temp->val);
            temp=temp->right;
        }
    }
    return ans;
}
