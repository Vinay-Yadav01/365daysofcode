int Solution::solve(vector<int> &A) {
    int mini=INT_MAX;
    for(int i:A){
        mini = min(i, mini);
    }
    int count=log2(mini)+1;
   
    int ans=0;
    for(int i=0; i<A.size(); i++){
        int t = log2(A[i]) + 1;
        if(t > count){
            ans += (t-count);
            A[i] = A[i]>>(t-count);
        }
    }
    int x=A[0];
    int y=A[0];
    for(int i:A){
        x = x&i;
        y = y|i;
    }
   
    if(x==y){
        return ans;
    }
    else{
        while(x!=y){
            x = x>>1;
            y = y>>1;
            ans += (A.size());
        }
    }
    return ans;
}
