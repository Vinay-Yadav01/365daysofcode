int solveRec(vector<vector<int> > &A, int i, int j,int n, vector<vector<int> > &dp){
    if(i==n-1) return A[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int down = solveRec(A,i+1,j,n,dp);
    int diagonal = solveRec(A,i+1,j+1,n,dp);
    return dp[i][j] = A[i][j] + min(down,diagonal);
}

int Solution::minimumTotal(vector<vector<int> > &A) {
    int n = A.size();
    vector<vector<int>> dp(n,vector<int>(n,-1));
    return solveRec(A,0,0,n,dp);
}
