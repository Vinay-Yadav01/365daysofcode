int Solution::numDistinct(string A, string B) {
    int n = A.length();
    int m = B.length();
    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
   
    for (int i = 0; i <= n; i++) {
        dp[i][m] = 1;
    }
   
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            dp[i][j] = dp[i + 1][j];
            if (A[i] == B[j]) {
                dp[i][j] += dp[i + 1][j + 1];
            }
        }
    }
   
    return dp[0][0];
}
