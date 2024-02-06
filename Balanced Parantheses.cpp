int Solution::solve(string A) {
    stack<char> s;
    for(int i=0;i<A.size();i++){
        if(A[i]=='(') s.push(A[i]);
        else{
            if(!s.empty() && s.top()=='(') s.pop();
            else return 0;
        }
    }
    return s.empty();
}
