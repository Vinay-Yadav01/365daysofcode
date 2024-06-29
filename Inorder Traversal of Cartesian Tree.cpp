/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::buildTree(vector<int> &A) {
    stack<TreeNode*> s;
    TreeNode* root = nullptr;
    for (int num : A) {
        TreeNode* curr = new TreeNode(num);
        while (!s.empty() && s.top()->val < num) {
            curr->left = s.top();
            s.pop();
        }
        if (s.empty()) {
            root = curr;
        } else {
            s.top()->right = curr;
        }
        s.push(curr);
    }
    return root;
}
