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
    queue<TreeNode*> q;
    stack<TreeNode*> s;
    q.push(A);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        s.push(temp);
        if(temp->right) q.push(temp->right);
        if(temp->left) q.push(temp->left);
    }
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top()->val);
        s.pop();
    }
    return ans;
}
