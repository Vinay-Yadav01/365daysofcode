int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();  
    vector<int>maxLeft(n, INT_MIN);
    vector<int>minRight(n,INT_MAX);    
    maxLeft[0] = A[0];
    for(int i=1;i<n;i++){
        maxLeft[i] = max(maxLeft[i-1], A[i-1]);
    }
    minRight[0] = A[n-1];
    for(int i=n-2;i>=0;i--){
        minRight[i] = min(minRight[i+1], A[i+1]);
    }
    for(int i=1;i<n-1;i++){
        if(A[i]>maxLeft[i] && A[i]<minRight[i])

            return 1;

    }
    return 0;
}
