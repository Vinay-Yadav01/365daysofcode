int Solution::solve(int A, int B) {
    int total=0;
    total+=min(8-A,8-B)+min(8-A,B-1)+min(A-1,8-B)+min(A-1,B-1);
    return total;
}
