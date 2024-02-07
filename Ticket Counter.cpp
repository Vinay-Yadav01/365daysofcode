int Solution::solve(vector<int> &A, vector<int> &B) {
    int time=0;
    int ans=0;
    for(int i=0;i<A.size();i++){
        if(A[i]<time)ans++;
        else time += B[i];
    }
    return ans;
}
