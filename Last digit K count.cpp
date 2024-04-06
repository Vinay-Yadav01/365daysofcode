int Solution::solve(int A, int B, int C) {
    int ans =0;
    ans = (B/10) - (A/10);
    if(B%10>=C)
    ans+=1;
    if(A%10>C)
    ans-=1;
    return ans;
}
