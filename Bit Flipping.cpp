int Solution::solve(int A) {
    int l = log2(A)+1;
    l = pow(2,l)-1;
    return A^(l);
}
