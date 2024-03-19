int Solution::solve(int A) {
    int ans=1;
    int mod=1e9+7,a=3;
    while(A)
    {
        if(A&1)
            ans=(ans*1ll*a)%mod;
        a=(a*1ll*a)%mod;
        A>>=1;
    }
    return ans;
}
