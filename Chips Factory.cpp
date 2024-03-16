vector<int> Solution::solve(vector<int> &A) {
    vector<int> ans;
    for(int i=0;i<A.size();i++){
        if(A[i]>0) ans.push_back(A[i]);
    }
    while(ans.size()<A.size()){
        ans.push_back(0);
    }
    return ans;
}

