int solve(const vector<int> &A, int index, int buy, vector<vector<int> > &dp){
    if(index>=A.size()) return 0;
    if(dp[index][buy]!=-1) return dp[index][buy];
    int ans=0;
    if(buy){
        int buykaro = -A[index] + solve(A,index+1,0, dp);
        int skipkaro = solve(A,index+1,1, dp);
        ans = max(buykaro,skipkaro);
    }
    else{
        int sellkaro = A[index] + solve(A,index+1,1, dp);
        int skipkaro = solve(A,index+1,0, dp);
        ans = max(sellkaro, skipkaro);
    }
    return dp[index][buy] = ans;
}

int Solution::maxProfit(const vector<int> &A) {
    vector<vector<int> > dp(A.size(),vector<int>(2,-1));
    return solve(A,0,1,dp);
}
