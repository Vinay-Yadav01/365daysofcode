int Solution::solve(vector<int> &A, int B, int C) {
    int ans=0;
    if(B%2==0){
        for(auto i:A){
            if(i%2!=0) ans++;
        }
    }
    else{
        for(auto i:A){
            if(i%2==0) ans++;
        }
    }
    return ans*C;
}
