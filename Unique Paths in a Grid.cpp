int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {

    int row_A = A.size();

    if(row_A == 0) return 0;

    int col_A = A[0].size();

    if(col_A == 0) return 0;

    

    vector<vector<int>>dp(row_A, vector<int>(col_A,0));

    dp[0][0] = (A[0][0] == 0) ? 1 : 0;

    

    for(int j=1;j<col_A;j++) dp[0][j] = (A[0][j] == 1) ? 0 : dp[0][j-1];

    for(int i=1;i<row_A;i++) dp[i][0] = (A[i][0] == 1) ? 0 : dp[i-1][0];

    

    for(int i=1;i<row_A;i++)

    {

        for(int j=1;j<col_A;j++)

        {

            if(A[i][j]) dp[i][j] = 0;

            else

              dp[i][j] = dp[i-1][j]+dp[i][j-1];

        }

    }

    

    return dp[row_A-1][col_A-1];

}
