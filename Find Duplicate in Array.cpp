int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    vector<int> arr(n+1,0);
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[A[i]]) ans=A[i];
        arr[A[i]]++;
    } 
    return ans;
}
