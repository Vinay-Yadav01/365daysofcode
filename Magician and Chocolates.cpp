int Solution::nchoc(int A, vector<int> &B) {
    long long int ans=0,mod=1e9+7;
    priority_queue<int> q;
    for(auto i: B){
        q.push(i);
    }
    while(A--){
        int elem = q.top();
        ans+=elem%mod;
        q.pop();
        q.push(elem/2);
    }
    return ans%mod;
}
