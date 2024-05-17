long long int factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n - 1)%1000000007;
}

int Solution::solve(int A) {
    long long int ans = (factorial(A)*2)%1000000007;
    return ans; 
}
