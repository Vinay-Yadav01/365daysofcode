string Solution::solve(string A) {
    for(int  i=0;i<A.size();i++){
        if(A[i]>=65 and A[i]<=90) A[i]+=32;
        else A[i]-=32;
    }
    return A;
}
