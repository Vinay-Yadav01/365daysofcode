bool pathway(TreeNode* root, int B, vector<int>& ans, bool& a) {
    if (root == nullptr)
        return false;

    if (a == false)
        ans.push_back(root->val);

    if (root->val == B) {
        a = true;
        return true;
    }

    bool L = pathway(root->left, B, ans, a);
    bool R = pathway(root->right, B, ans, a);

    if (L == false && R == false && a == false) { // i missed  a == false this conduction;
        ans.pop_back();
        return false;
    }

    return true;
}

vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> ans;
    bool a = false;
    pathway(A, B, ans, a);
    return ans;
}
