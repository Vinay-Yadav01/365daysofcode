int Solution::solve(int A, int B) {
    int ans=0;
    while(B>0){
        B-=(A*5);
        ans++;
    }
    return ans;
}
