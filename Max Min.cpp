int Solution::solve(vector<int> &A) {
    int n=A.size();
    int minIndex=0,maxIndex=0;
    for(int i=0; i<n; i++) {
        minIndex=(A[i]<A[minIndex])?i:minIndex;
        maxIndex=(A[i]>A[maxIndex])?i:maxIndex;
    }
    return A[minIndex]+A[maxIndex];
}
