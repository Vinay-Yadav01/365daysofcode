int Solution::solve(vector<int> &A) {
    stack<int> st;
    int root=INT_MIN;
    for(auto curr : A){
        while(st.size()>0 and curr >=st.top()){
            root=st.top();
            st.pop();
        }
        if(root>=curr) return false;
        st.push(curr);
    }
    return true;
}
