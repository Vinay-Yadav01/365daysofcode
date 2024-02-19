vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> res(A.size());
    stack<int> stk;
    for(int i=0; i<A.size(); i++) {
        int cur = A[i];
        while(!stk.empty() and stk.top()>=cur)
            stk.pop();
        int nearestSmaller = stk.empty() ? -1 : stk.top();
        res[i] = nearestSmaller;
        stk.push(cur);
    }
    return res;
}
