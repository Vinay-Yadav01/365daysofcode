int rec(vector<vector<int> > &A,int pos,int color,vector<vector<int> > &DP){
    if(pos>=A.size()) return 0;
    if(DP[pos][color]==-1)
        DP[pos][color]=min(rec(A,pos+1,(color+1)%3,DP)+A[pos][(color+1)%3],rec(A,pos+1,(color+2)%3,DP)+A[pos][(color+2)%3]);
    return DP[pos][color];
}
int Solution::solve(vector<vector<int> > &A) {
    vector<vector<int>> DP(A.size(),vector<int>(3,-1));
    return min(min(A[0][0]+rec(A,1,0,DP),A[0][1]+rec(A,1,1,DP)),A[0][2]+rec(A,1,2,DP));
}
