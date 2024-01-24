int Solution::gcd(int A, int B) {
    if(A==0) return B;
    else if(B==0) return A;
    else{
        int ans=0,i=1;
        for(int i=1;i<=A and i<=B;i++){
            if(A%i==0 and B%i==0) ans=i;
        }
        return ans;
    }
}
