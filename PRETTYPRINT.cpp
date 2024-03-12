vector<vector<int> > Solution::prettyPrint(int A) {
    int n=2*A-1;
    vector<vector<int>> ans(n, vector<int>(n,0));
    for(int i=0;i<A;i++){
        for(int j=i;j<n-i;j++){
            ans[i][j] = A-i;
            ans[j][i] = A-i;
            ans[n-i-1][j] = A-i;
            ans[n-j-1][n-i-1] = A-i;
        }
    }
    return ans;
}
