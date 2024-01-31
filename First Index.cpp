vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    vector<int> v;
    for(int i=0; i<B.size(); i++){
        int ans=-1;
        for(int j=0; j<A.size(); j++){
            if(A[j]>=B[i]){
                ans=j;
                break;
            }
        }
        v.push_back(ans);
    }
    return v;
}
