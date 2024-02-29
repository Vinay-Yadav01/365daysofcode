int Solution::solve(vector<int> &A, int B) {
    priority_queue<int> q;
    int result=0;
    for(auto i: A){
        q.push(i);
    }
    while(B--){
        int top = q.top();
        result += top;
        q.pop();
        q.push(--top);
    }
    return result;
}
