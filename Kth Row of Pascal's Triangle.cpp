vector<int> Solution::getRow(int A) {
    vector<int> ans(A+1,1);
    int u=A,d=1;
    for(int i=1;i<A;i++){
        ans[i]=(ans[i-1]*u)/d;
        u--;
        d++;
    }
    return ans;
}
