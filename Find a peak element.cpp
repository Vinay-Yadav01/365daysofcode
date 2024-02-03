int Solution::solve(vector<int> &A) {
    int ans=0;
    int s=0,e=A.size()-1;
    while(s<e){
        int mid = s+ (e-s)/2;
        if(A[mid]<A[mid+1]) s=mid+1;
        else e=mid;
    }
    return A[s];
}
