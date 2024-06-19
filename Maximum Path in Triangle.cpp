int solveRec(vector<vector<int>> &A, int i, int j,int n, vector<vector<int>> &dp){
    if(i==n-1) return A[i][j];
    if(A[i][j]==0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int down = A[i][j] + solveRec(A,i+1,j,n,dp);
    int diagonal = A[i][j] + solveRec(A,i+1,j+1,n,dp);
    return dp[i][j] = max(down,diagonal);
}

int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    vector<vector<int>> dp(n,vector<int>(n,-1));
    return solveRec(A,0,0,n,dp);
}
