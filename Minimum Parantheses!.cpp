int Solution::solve(string A) {
    int c =0;
    queue<char> q;
    for (int i =0;i<A.size(); i++){
       
        if (A[i]=='(') q.push(A[i]);
        else if (!q.empty() && A[i]==')') q.pop();
        else c++;
    }
    return c+q.size();
}
