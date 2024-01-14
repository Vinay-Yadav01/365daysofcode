int Solution::solve(vector<int> &A) {
    int maxi=-1;
    int ans=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>maxi){
            ans++;
            maxi=A[i];
        }
    }
    return ans;
}
