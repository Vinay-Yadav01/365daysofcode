vector<int> Solution::solve(vector<int> &A, int B) {
    vector<int> ans;
    priority_queue<int> q;
    for(auto i:A){
        q.push(i);
    }
    while(B--){
        ans.push_back(q.top());
        q.pop();
    }
    return ans;
}
