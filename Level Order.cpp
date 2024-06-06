/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(A);
    q.push(NULL);
    vector<int> temp;
    while(!q.empty()){
        if(q.front()==NULL){
            ans.push_back(temp);
            temp.clear();
            q.pop();
            if(q.size()!=0) q.push(NULL);
            else break; //Last Row
        }
        TreeNode* front = q.front();
        q.pop();
        temp.push_back(front->val);
        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }
    return ans;
}
