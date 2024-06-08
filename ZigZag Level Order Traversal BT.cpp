vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A)
{
    vector<vector<int>> result;
    if(A==NULL) return result;
    queue<TreeNode*> nodequeue;
    nodequeue.push(A);
    bool  ltor=true;//left to right ltor
    while(!nodequeue.empty())
    {
        int size=nodequeue.size();
        vector<int>row(size);
        for(int i=0;i<size;i++)
        {
            TreeNode* node=nodequeue.front();
            nodequeue.pop();
            int index=ltor?i:(size-1-i);
            row[index]=node->val;
            if(node->left)
            {
                nodequeue.push(node->left);
            }
           
            if(node->right)
            {
                nodequeue.push(node->right);
            }
        }
        ltor=!ltor;
        result.push_back(row);
       
    }
    return result;
}
