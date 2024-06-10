int Solution::climbStairs(int A) {
    int prev1=1;
    int prev2=1;
    for(int i=2;i<=A;i++){
        int curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}
