bool ok(int x,vector<vector<int> > &A,int B){
   
    unordered_map<int,int>m;
    int sum=0;
    for(auto it:A){
       if(m[it[0]]!=-1 && m[it[0]]+it[1]<=x){
           sum+=it[1];
           m[it[0]]+=it[1];
       } else m[it[0]]=-1;
    }
   
    return sum<=B;
}

int Solution::solve(vector<vector<int> > &A, int B) {
   
    int low=0,high=B;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(ok(mid,A,B)){
            ans=mid;
            low=mid+1;
        }else high=mid-1;
    }
    return ans;
}
