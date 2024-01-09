int Solution::isPrime(int A) {
    if(A==1) return 0;
    int ans=1;
    for(int i=2;i<A;i++){
        if(A%i==0){
            ans=0;
            break;
        }
    }
    return ans;
}
