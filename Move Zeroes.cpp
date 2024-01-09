vector<int> Solution::solve(vector<int> &A) {
    int st = 0, end = 0;
    while(end < A.size()) {
        if(A[end] != 0) {
            swap(A[end], A[st]);
            st++;
        }
        end++;
    }
    return A;
}
