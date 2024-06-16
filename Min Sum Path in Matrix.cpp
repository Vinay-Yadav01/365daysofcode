int solve(vector<vector<int>>& grid,int i,int j,vector<vector<int>>&dp){
        if(i==grid.size()-1&&j==grid[0].size()-1){
        return grid[i][j];
    }
    if(i>=grid.size()||j>=grid[0].size()){
        return INT_MAX;
    }
    
    
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int right =solve(grid,i,j+1,dp);
    int down=solve(grid,i+1,j,dp);
    
    
    return dp[i][j]=min(right,down)+grid[i][j];
}
int Solution::minPathSum(vector<vector<int> > &A) {
    vector<vector<int>>dp(A.size(),vector<int>(A[0].size(),-1));
    solve(A,0,0,dp);
    if(A.size()==1&&A[0].size()==1){
        return A[0][0];
    }
    return dp[0][0];
}
