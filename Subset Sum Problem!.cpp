int Solution::solve(vector<int> &nums, int B) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)sum+=nums[i];
        if(B>sum)return 0;
        if(B==sum)return 1;
        vector<vector<int>>dp(n,vector<int>(sum+1,0));
        for(int i=0;i<n;i++)dp[i][0]=1;
        dp[0][nums[0]]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<=sum;j++){
                if(dp[i-1][j]==1){
                    dp[i][j+nums[i]]=1;
                    dp[i][j]=1;
                }
            }
        }
        return dp[n-1][B];
}
