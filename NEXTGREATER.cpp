vector<int> Solution::nextGreater(vector<int> &A) {
    int n=A.size();
    vector<int> ans;
    stack<int> s;
    int i=n-1;
    while(i>=0){
        if(s.empty()){
            ans.push_back(-1);
            s.push(A[i]);
            i--;
        }
        else if(s.top()>A[i]){
            ans.push_back(s.top());
            s.push(A[i]);
            i--;
        }
        else  s.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
