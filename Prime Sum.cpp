vector<int> sieve(int n) {
    vector<bool>prime(n+1,true);
    vector<int>ans;   
    prime[0] = false;
    prime[1] = false;    
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            ans.push_back(i);
        }
    }
    return ans;
}

vector<int> Solution::primesum(int A) {
    vector<int> prime=sieve(A);
    vector<int> ans;
    int s=0,e=prime.size()-1;
    while(s<=e){
        int sum = prime[s]+prime[e];
        if(sum==A){
            ans.push_back(prime[s]);
            ans.push_back(prime[e]);
            break;
        }
        else if(sum<A) s++;
        else e--;
    }
    return ans;
}
